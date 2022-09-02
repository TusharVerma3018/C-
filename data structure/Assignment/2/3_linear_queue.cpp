#include <iostream>
#define max 5
using namespace std;
int queue[max], front = -1, rear = -1;

void insertq()
{
    int item;
    if (rear == max - 1)
    {
        cout << "\n\n\t\tTHE QUEUE IS FULL";
        return;
    }
    else
    {
        cout << "\n\n\t\tENTER THE ELEMENT TO BE INSERTED : ";
        cin >> item;
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
        queue[rear] = item;
    }
}

void deleteq()
{
    int item;
    if (front == -1)
    {
        cout << "\n\n\t\tTHE QUEUE IS EMPTY";
        return;
    }
    else
    {
        item = queue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = front + 1;
        }
        cout << "\n\n\t\tTHE DELETED ITEM IS " << item;
    }
}

void displayq()
{
    int i;
    if (front == -1)
    {
        cout << "\n\n\t\tTHE QUEUE DOES NOT CONTAIN ANY ELEMENT";
        return;
    }
    else
    {
        cout << "\n\n\t\tTHE QUEUE IS \n";
        for (i = front; i <= rear; i++)
        {
            cout << "\n\t\t" << queue[i];
        }
    }
}


int main()
{
    int choice;
    while (1)
    {
        cout << "\n 1. INSERT";
        cout << "\n 2. DELETE";
        cout << "\n 3. DISPLAY";
        cout << "\n 0. EXIT";
        cout << "\n\n\t\tENTER YOUR CHOICE : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            insertq();
            // displayq();
            break;
        case 2:
            deleteq();
            // displayq();
            break;
        case 3:
            displayq();
            break;
        case 0:
            exit(0);
        default:
            cout << "\n\n\t\tYOU ENTERED WRONG CHOICE";
        }
    }
    return 0;
}

