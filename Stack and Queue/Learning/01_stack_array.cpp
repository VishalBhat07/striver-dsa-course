#include <iostream>
#define SIZE 10
using namespace std;

class stack
{
public:
    int stack_array[SIZE];
    int top;

    stack(int t)
    {
        top = t;
    }

    void push()
    {
        if (top == SIZE - 1)
        {
            cout << "Stack is full !!" << endl;
            return;
        }

        int ele;
        cout << "Enter element to be inserted : ";
        cin >> ele;

        stack_array[++top] = ele;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty !!" << endl;
            return;
        }

        top--;
    }

    int topp()
    {
        if (top == -1)
        {
            cout << "Stack is empty !!" << endl;
            return -1;
        }

        return stack_array[top];
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty !!" << endl;
            return;
        }
        for (int i = 0; i <= top; i++)
        {
            cout << stack_array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    cout << "1.Push 2.Pop 3.Display 4.Top 5.Exit" << endl;
    stack st(-1);

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
            cout << st.topp() << endl;
            break;
        default:
            return 0;
        }
    }

    return 0;
}