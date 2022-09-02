#include <iostream>
using namespace std;

int top = -1;
int arr[10];
int size = 10;
void push(int x)
{
    if (top >= size - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        arr[top] = x;
    }
}

void pop()
{
    if (top <= -1)
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        cout << "popped element : " << arr[top] << endl;
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack element are :" << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int choice, val;
    cout << "1.Push" << endl
         << "2.pop" << endl
         << "3.Display" << endl
         << "4.exit" << endl;

    do
    {
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter data to push : ";
            cin >> val;
            push(val);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            cout << "EXIT...";
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}