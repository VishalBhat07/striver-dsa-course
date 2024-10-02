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

bool checkPalindrome(Node *head)
{
    // stack<int> st;
    // Node *temp = head;

    // while (temp)
    // {
    //     st.push(temp->data);
    //     temp = temp->next;
    // }

    // temp = head;

    // while (temp)
    // {
    //     if (st.top() != temp->data)
    //         return 0;

    //     st.pop();
    //     temp = temp->next;
    // }
    // return 1;

    // Optimal solution

    Node *slow = head;
    Node *fast = head;

    while (fast->next->next != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *newHead = reverseList(slow->next);

    Node *first = head;
    Node *second = newHead;

    while (second)
    {
        if (first->data != second->data)
            return 0;

        first = first->next;
        second = second->next;
    }
    return 1;
}

int main()
{
    vector<int> arr = {3, 3, 3};

    Node *head = convertArrtoLL(arr);

    cout << "Original list : " << endl;
    printNodes(head);

    bool flag = checkPalindrome(head);
    if (flag)
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}