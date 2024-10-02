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

    // BRUTE FORCE

    // Node *temp = head;
    // stack<int> st;

    // while (temp)
    // {
    //     st.push(temp->data);
    //     temp = temp->next;
    // }

    // temp = head;

    // while (temp)
    // {
    //     temp->data = st.top();
    //     st.pop();
    //     temp = temp->next;
    // }
    // return head;

    // ITERATIVE

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

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = convertArrtoLL(arr);

    cout << "Original list : " << endl;
    printNodes(head);

    cout << "Reversed list : " << endl;
    head = reverseList(head);
    printNodes(head);

    return 0;
}