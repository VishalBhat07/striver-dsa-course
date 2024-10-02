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

Node *deleteNode(Node *head)
{
    Node *prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;

    delete prev;

    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = arrToDLL(arr);

    cout << "Array converted to DLL : " << endl;
    print_nodes(head);

    Node *temp = deleteNode(head);
    cout << endl;
    cout << "Head deleted : " << endl;
    print_nodes(temp);

    return 0;
}