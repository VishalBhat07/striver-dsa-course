#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data1, Node *next1, Node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1)
    {
        data = data1;
        next = NULL;
        prev = NULL;
    }
};

int main()
{

    Node *head = new Node(45);

    Node *current = new Node(97, NULL, head);
    head->next = current;

    Node *current2 = new Node(108, NULL, current);
    current->next = current2;

    cout << head->data << endl;
    cout << current->data << endl;
    cout << current2->data << endl;

    return 0;
}