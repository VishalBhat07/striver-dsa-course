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

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], NULL, back);
        back->next = temp;
        back = temp;
    }
    return head;
}

Node *insertHead(Node *head, int valueue)
{
    Node *temp = new Node(valueue, head, nullptr);

    head->back = temp;

    return temp;
}

Node *insertNode(Node *head, int k, int value)
{
    Node *temp = head;
    int i = 0;

    if (k == 0)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        newNode->back = nullptr;

        head->back = newNode;

        return newNode;
    }

    while (temp)
    {
        i++;
        if (i == k)
            break;
        temp = temp->next;
        if (temp->next == nullptr)
            break;
    }

    if (temp->next == nullptr)
    {
        Node *newNode = new Node(value);
        newNode->next = temp;
        newNode->back = temp->back;

        temp->back->next = newNode;
        temp->back = newNode;

        return head;
    }

    Node *newNode = new Node(value);
    newNode->next = temp;
    newNode->back = temp->back;

    temp->back->next = newNode;
    temp->back = newNode;

    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = arrToDLL(arr);

    cout << "Array converted to DLL : " << endl;
    print_nodes(head);

    Node *temp = insertNode(head, 4, 101);
    cout << endl;
    cout << "kth node is inserted : " << endl;
    print_nodes(temp);

    return 0;
}