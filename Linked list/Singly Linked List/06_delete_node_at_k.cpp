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

Node *deleteNode(Node *head, int k)
{

    if (head == nullptr)
        return head;

    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
        return head;
    }

    int count = 0;
    Node *temp = head;
    Node *prev = nullptr;
    while (temp)
    {
        count++;

        if (count == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
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
    vector<int> arr = {48,49};

    Node *head = convertArrtoLL(arr);
    printNodes(head);

    head = deleteNode(head, 1);

    printNodes(head);

    return 0;
}