#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;

    Node(int val)
    {
        data = val;
        link = nullptr;
    }
    Node(int val, Node *ptr)
    {
        data = val;
        link = ptr;
    }
};

int main()
{
    Node *head = new Node(45);

    cout << head->data << endl;

    return 0;
}