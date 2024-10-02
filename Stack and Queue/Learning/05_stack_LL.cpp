#include <iostream>

using namespace std;

// Node structure for the linked list
struct Node
{
    int data;
    Node *next;
};

// Stack class using a singly linked list
class Stack
{
private:
    Node *top; // Pointer to the top of the stack

public:
    Stack() : top(nullptr) {} // Initialize the stack with an empty linked list
    int size = 0;

    // Push an element onto the stack
    void push()
    {
        int ele;
        cout << "Enter element to be inserted : ";
        cin >> ele;
        Node *temp = new Node();
        temp->data = ele;
        temp->next = top;
        top = temp;
        size++;
    }

    // Pop an element from the stack
    void pop()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }

        Node *temp = top;
        top = top->next;
        cout << temp->data << endl;
        delete temp;
        size--;
    }

    // Peek at the top element of the stack
    void display()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty." << endl;
            return; // Return some sentinel value to indicate an empty stack
        }
        Node *temp = top;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Check if the stack is empty
    int front()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty." << endl;
            return -1; // Return some sentinel value to indicate an empty stack
        }
        return top->data;
    }
};

int main()
{
    cout << "1.Push 2.Pop 3.Display 4.Top 5.Exit" << endl;
    Stack st;

    while (1)
    {
        int choice;
        cout << "Enter you choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            st.push();
            break;
        case 2:
            st.pop();
            break;
        case 3:
            st.display();
            break;
        case 4:
            cout << st.front() << endl;
            break;
        default:
            return 0;
        }
    }

    return 0;
}
