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

    while (temp)
    {
        temp->next ? cout << temp->data << " -> " : cout << temp->data;
        temp = temp->next;
    }
}

int lengthOfLL(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    Node *head = convertArrtoLL(arr);
    printNodes(head);
    cout << endl;
    cout << "Length of linked list is " << lengthOfLL(head) << endl;

    return 0;
}