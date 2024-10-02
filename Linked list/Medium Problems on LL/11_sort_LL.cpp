#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

Node *convertArrtoLL(vector<int> arr)
{
    Node *head = new Node(arr[0], nullptr);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr);

        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printNodes(Node *head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        (temp->next != nullptr) ? (cout << temp->data << " -> ") : (cout << temp->data);
        temp = temp->next;
    }
    cout << endl;
}

Node *findMiddleNode(Node *head)
{
    if (head->next == nullptr)
        return nullptr;

    Node *slow = head;
    Node *fast = head;
    fast = fast->next->next;

    while (fast != nullptr && fast->next != nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

Node *mergeTwoLists(Node *list1, Node *list2)
{
    if (list1 == NULL)
        return list2;

    // if list2 happen to be NULL
    // we will simply return list1.
    if (list2 == NULL)
        return list1;

    Node *ptr = list1;
    if (list1->data > list2->data)
    {
        ptr = list2;
        list2 = list2->next;
    }
    else
    {
        list1 = list1->next;
    }
    Node *curr = ptr;

    // till one of the list doesn't reaches NULL
    while (list1 && list2)
    {
        if (list1->data <= list2->data)
        {
            curr->next = list1;
            list1 = list1->next;
        }
        else
        {
            curr->next = list2;
            list2 = list2->next;
        }
        curr = curr->next;
    }

    // adding remaining elements of bigger list.
    if (!list1)
        curr->next = list2;
    else
        curr->next = list1;

    return ptr;
}

Node *sortList(Node *head)
{

    // Brute Force

    // if (head == nullptr || head->next == nullptr)
    //     return nullptr;

    // vector<int> v;

    // Node *temp = head;

    // while (temp)
    // {
    //     v.push_back(temp->data);

    //     temp = temp->next;
    // }

    // sort(v.begin(), v.end());
    // temp = head;
    // int i = 0;

    // while (temp)
    // {
    //     temp->data = v[i];
    //     temp = temp->next;
    //     i++;
    // }

    // return head;

    // Optimal Solution ----> Recursive merge sort

    if (head == nullptr || head->next == nullptr)
        return head;

    Node *middle = findMiddleNode(head);
    Node *leftHead = middle;
    Node *rightHead = middle->next;

    middle->next = nullptr; // Separating the two linked lists

    leftHead = sortList(leftHead);
    rightHead = sortList(rightHead);

    return mergeTwoLists(leftHead, rightHead);
}

int main()
{
    vector<int> arr = {1, -4, 3, 2, 1};

    Node *head = convertArrtoLL(arr);

    cout << "Original list : " << endl;
    printNodes(head);

    cout << "Sorted list: " << endl;
    head = sortList(head);
    printNodes(head);

    return 0;
}