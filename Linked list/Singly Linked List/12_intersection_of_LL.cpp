#include <iostream>
#include <map>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
    Node(int val, Node *ptr)
    {
        data = val;
        next = ptr;
    }
};

Node *getIntersectionNode(Node *headA, Node *headB)
{
    // Brute force

    // map<Node *, int> mp;

    // Node *temp = headA;

    // while (temp)
    // {
    //     mp[temp] = 1;
    //     temp = temp->next;
    // }

    // temp = headB;

    // while (temp)
    // {
    //     if (mp.find(temp) != mp.end())
    //         return temp;

    //     temp = temp->next;
    // }
    // return nullptr;

    // Better solution

    // Node *tempA = HeadA;
    // Node *tempB = HeadB;
    // int N1 = 0;
    // int N2 = 0;

    // while (tempA)
    // {
    //     N1++;
    //     tempA = tempA->next;
    // }

    // while (tempB)
    // {
    //     N2++;
    //     tempB = tempB->next;
    // }

    // tempA = HeadA;
    // tempB = HeadB;

    // if (N1 == N2)
    // {
    //     while (tempA)
    //     {
    //         if (tempA == tempB)
    //             return tempA;
    //         tempA = tempA->next;
    //         tempB = tempB->next;
    //     }
    // }
    // else if (N1 > N2)
    // {
    //     int d = N1 - N2;
    //     while (d != 0)
    //     {
    //         d--;
    //         tempA = tempA->next;
    //     }
    //     while (tempA)
    //     {
    //         if (tempA == tempB)
    //             return tempA;
    //         tempA = tempA->next;
    //         tempB = tempB->next;
    //     }
    // }
    // else
    // {
    //     int d = N2 - N1;
    //     while (d != 0)
    //     {
    //         d--;
    //         tempB = tempB->next;
    //     }
    //     while (tempA)
    //     {
    //         if (tempA == tempB)
    //             return tempA;
    //         tempA = tempA->next;
    //         tempB = tempB->next;
    //     }
    // }
    // return nullptr;

    // Optimal solution
    if (headA == nullptr || headB == nullptr)
        return nullptr;

    Node *t1 = headA;
    Node *t2 = headB;

    while (t1 != t2)
    {

        t1 = t1->next;
        t2 = t2->next;

        if (t1 == t2)
            return t1;

        if (t1 == nullptr)
            t1 = headB;

        if (t2 == nullptr)
            t2 = headA;
    }

    return nullptr;
}

int main()
{

    return 0;
}
