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

Node *reverseList(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *temp = head;
    Node *prev = nullptr;

    while (temp)
    {
        Node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }

    return prev;
}

Node *segregateNodes(Node *head)
{
    if (head == nullptr)
        return nullptr;

    if (head->next == nullptr || head->next->next == nullptr)
        return head;

    Node *temp = head;
    Node *evenHead = temp->next;
    Node *front = head;

    while (temp->next != nullptr && temp->next != nullptr &&
           temp->next->next != nullptr)
    {
        front = temp->next;
        temp->next = front->next;
        front->next = temp->next->next;

        temp = temp->next;
    }
    temp->next = evenHead;

    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

    Node *head = convertArrtoLL(arr);

    cout << "Original list : " << endl;
    printNodes(head);

    cout << "Updated list : " << endl;
    printNodes(segregateNodes(head));

    return 0;
}