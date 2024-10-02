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

Node *removeNthFromEnd(Node *head, int n)
{

    // Brute force

    // Node *temp = head;
    // int cnt = 0;

    // while (temp != NULL)
    // {
    //     temp = temp->next;
    //     cnt++;
    // }

    // if (cnt == 1)
    // {
    //     return NULL;
    // }

    // if (cnt == n)
    // {
    //     head = head->next;
    //     return head;
    // }

    // int res = cnt - n;
    // temp = head;

    // while (temp)
    // {
    //     res--;

    //     if (res == 0)
    //         break;

    //     temp = temp->next;
    // }

    // Node *ptr = temp->next;
    // temp->next = ptr->next;
    // delete ptr;

    // return head;

    // Optimal solution ( Slow and Fast pointers )

    Node *slow = head;
    Node *fast = head;

    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
    }

    if (fast == nullptr)
        return head->next;

    while (fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }

    Node *temp = slow->next;
    slow->next = temp->next;
    delete temp;

    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = convertArrtoLL(arr);

    cout << "Original list : " << endl;
    printNodes(head);

    cout << "Updated list: " << endl;
    head = removeNthFromEnd(head, 4);
    printNodes(head);

    return 0;
}