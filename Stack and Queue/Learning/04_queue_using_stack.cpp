#include <iostream>
#define SIZE 10
using namespace std;

void reverse(int *arr, int n)
{
    int l = 0;
    int r = n;

    while (l < r)
    {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

class Queue
{
public:
    int queue[SIZE];
    int start = -1;
    int end = -1;
    int current_size = 0;

    void push()
    {
        if (current_size == SIZE)
        {
            cout << "Queue is full !!" << endl;
            return;
        }

        int ele;
        cout << "Enter element to be inserted : ";
        cin >> ele;

        if (current_size == 0)
        {
            start = 0;
            end = 0;
        }
        else
        {
            end = (end + 1) % SIZE;
        }
        queue[end] = ele;
        current_size++;
    }

    void pop()
    {
        if (current_size == 0)
        {
            cout << "Queue is empty !!" << endl;
            return;
        }

        if (current_size == 1)
        {
            start = -1;
            end = -1;
        }
        else
        {
            start = (start + 1) % SIZE;
        }
        current_size--;
    }

    int front()
    {
        if (current_size == 0)
        {
            cout << "Queue is empty !!" << endl;
            return -1;
        }

        return queue[start];
    }

    void display()
    {
        if (current_size == 0)
        {
            cout << "Queue is empty !!" << endl;
            return;
        }

        int i = start;
        for (int count = 0; count < current_size; count++)
        {
            cout << queue[i] << " ";
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main()
{
    cout << "1.Push 2.Pop 3.Display 4.Front 5.Exit" << endl;
    Queue Q;

    while (1)
    {
        int choice;
        cout << "Enter your choice : ";
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
