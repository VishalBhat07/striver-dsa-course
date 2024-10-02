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
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *insertNode(Node *head, int val)
{
    Node *temp = head;

    while (temp->next)
    {
        temp = temp->next;
    }

    Node *tail = new Node(val);
    temp->next = tail;

    return head;
}

void printNodes(Node *head)
{
    Node *temp = head;

    while (temp)
    {
        temp->next ? cout << temp->data << "->" : cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

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

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = convertArrtoLL(arr);
    printNodes(head);

    head = insertNode(head, 6);
    head = insertNode(head, 7);
    head = insertNode(head, 8);

    printNodes(head);

    return 0;
}