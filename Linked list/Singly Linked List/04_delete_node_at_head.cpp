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

Node *deleteNode(Node *head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
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

int main()
{

    Node *head = new Node(50);
    Node *curr1 = new Node(60, nullptr);
    head->next = curr1;
    Node *curr2 = new Node(70, nullptr);
    curr1->next = curr2;

    printNodes(head);

    printNodes(deleteNode(head));

    return 0;
}