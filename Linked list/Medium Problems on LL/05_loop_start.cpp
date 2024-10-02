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
Node *hasCycle(Node *head)
{
    // Brute force

    // Node *temp = head;
    // map<Node *, int> mpp;

    // while (temp)
    // {
    //     if (mpp.find(temp) != mpp.end())
    //         return temp;

    //     mpp[temp] = 1;

    //     temp = temp->next;
    // }
    // return nullptr;

    // Tortoise and Hare Algorithm

    Node *slow = head;
    Node *fast = head;

    while (fast)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return slow;
    }
    return nullptr;
}

int main()
{

    return 0;
}