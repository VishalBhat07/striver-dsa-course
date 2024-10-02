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

Node *middleNode(Node *head)
{
    // int i = 0;
    // Node *temp = head;

    // while (temp)
    // {
    //     i++;
    //     temp = temp->next;
    // }

    // temp = head;
    // int count = (i / 2) + 1;

    // while (temp)
    // {
    //     count--;
    //     if (count == 0)
    //         break;
    //     temp = temp->next;
    // }
    // return temp;

    // TORTOISE AND HARE ALGORITHM

    Node *slow = head;
    Node *fast = head;

    while (fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = convertArrtoLL(arr);
    printNodes(head);

    head = middleNode(head);
    cout << "Middle node : " << head->data << endl;

    return 0;
}