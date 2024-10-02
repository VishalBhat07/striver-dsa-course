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

Node *insertNode(Node *head, int val, int ele)
{
    if (head == nullptr)
        return head;

    if (head->data == ele)
    {
        return new Node(val, head);
    }

    Node *temp = head;
    Node *prev = nullptr;
    while (temp)
    {

        if (temp->next->data == ele)
        {
            Node *ptr = new Node(val);
            ptr->next = temp->next;
            temp->next = ptr;
            break;
        }
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
    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = convertArrtoLL(arr);
    printNodes(head);

    head = insertNode(head, 10, 4);

    printNodes(head);

    return 0;
}