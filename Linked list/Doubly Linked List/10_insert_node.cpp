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

    while (ptr != NULL)
    {
        ptr->next ? cout << ptr->data << " <-> " : cout << ptr->data;
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

void insertNode(Node *node, int val)
{
    Node *newNode = new Node(val, node, node->back);
    node->back->next = newNode;
    node->back = newNode;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = arrToDLL(arr);

    cout << "Array converted to DLL : " << endl;
    print_nodes(head);

    insertNode(head->next->next, 100);
    cout << endl;
    cout << "New List : " << endl;
    print_nodes(head);

    return 0;
}