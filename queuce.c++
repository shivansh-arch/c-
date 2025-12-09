#include <iostream>
using namespace std;

void push(int arr[], int &first, int &rear, int val)
{
    if (first == -1)
    {
        first = 0;
        rear = 0;
        arr[rear] = val;
    }
    else if (rear < 9)
    {
        rear++;
        arr[rear] = val;
    }
    else
    {
        cout << "Queue is full\n";
    }
}

void pop(int arr[], int &first, int &rear)
{
    if (first == -1)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << "Popped: " << arr[first] << '\n';
        if (first == rear)
        {
            first = -1;
            rear = -1;
        }
        else
        {
            first++;
        }
    }
}

int main()
{
    int arr[10];
    int first = -1, rear = -1;

    push(arr, first, rear, 5);
    push(arr, first, rear, 10);
    pop(arr, first, rear);
    pop(arr, first, rear);
    pop(arr, first, rear);

    return 0;
}