#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Queue
{
public:
    int size = 0;
    Node *start = nullptr;
    Node *end = nullptr;

    void push()
    {
        int ele;
        cout << "Enter element to be inserted : ";
        cin >> ele;
        Node *temp = new Node();
        temp->data = ele;

        if (start == nullptr)
        {
            start = end = temp;
        }
        else
        {
            end->next = temp;
            end = temp;
        }

        size++;
    }

    void pop()
    {
        if (start == nullptr)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        Node *temp = start;
        start = start->next;
        cout << temp->data << endl;
        delete temp;
        size--;
    }

    void display()
    {
        if (start == nullptr)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        Node *temp = start;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int front()
    {
        if (start == nullptr)
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return start->data;
    }
};

int main()
{
    cout << "1.Push 2.Pop 3.Display 4.Top 5.Exit" << endl;
    Queue Q;

    while (1)
    {
        int choice;
        cout << "Enter you choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Q.push();
            break;
        case 2:
            Q.pop();
            break;
        case 3:
            Q.display();
            break;
        case 4:
            cout << Q.front() << endl;
            break;
        default:
            return 0;
        }
    }

    return 0;
}
