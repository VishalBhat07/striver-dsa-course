#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1)
    {
        data = data1;
        next = NULL;
        back = NULL;
    }
};

void print_nodes(Node *head)
{
    Node *ptr = head;

    while (ptr)
    {
        ptr->next ? cout << (ptr->data) << " <-> " : cout << ptr->data;
        ptr = ptr->next;
    }
}

Node *arrToDLL(vector<int> arr)
{

    Node *head = new Node(arr[0]);
    Node *back = head;

    for (int i = 1; i < 5; i++)
    {
        Node *temp = new Node(arr[i], NULL, back);
        back->next = temp;
        back = temp;
    }
    return head;
}

Node *insertNode(Node *head, int value)
{
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    Node *newTail = new Node(value, nullptr, tail);
    tail->next = newTail;

    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = arrToDLL(arr);

    cout << "Array converted to DLL : " << endl;
    print_nodes(head);

    Node *temp = insertNode(head, 10);
    temp = insertNode(head, 11);
    temp = insertNode(head, 12);

    cout << endl;
    cout << "Tail inserted: " << endl;
    print_nodes(temp);

    return 0;
}