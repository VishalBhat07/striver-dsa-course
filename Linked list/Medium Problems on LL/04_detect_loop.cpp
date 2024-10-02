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
bool hasCycle(Node *head)
{
    // brute force
    // Node *temp = head;
    // map<Node *, int> mpp;

    // while (temp)
    // {
    //     if (mpp.find(temp) != mpp.end())
    //         return true;

    //     mpp[temp] = 1;

    //     temp = temp->next;
    // }
    // return false;

    // Tortoise and Hare Algorithm

    Node *slow = head;
    Node *fast = head;

    while (fast)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }
    return false;
}

int main()
{

    return 0;
}