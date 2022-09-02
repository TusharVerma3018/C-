#include <iostream>
using namespace std;

int top = -1;
int size = 10;
int arr[10];

void push(int x)
{
    if (top == size - 1)
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
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        top--;
    }
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int topElement()
{
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
        return -1;
    }
    return arr[top];
}

int main()
{
    push(1);
    push(2);
    push(3);
    int a = topElement();
    cout << a << endl;

    pop();
    a = topElement();
    cout << a << endl;

    pop();
    a = topElement();
    cout << a << endl;

    pop();
    a = topElement();
    cout << a << endl;

    return 0;
}