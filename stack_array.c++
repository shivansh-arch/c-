#include <iostream>
using namespace std;

#define MAX 5  // maximum size of stack

class Stack {
    int arr[MAX];
    int top;

public:
    // constructor
    Stack() {
        top = -1;
    }

    // push operation
    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack Overflow! Cannot push " << x << endl;
        } else {
            arr[++top] = x;
            cout << x << " pushed to stack." << endl;
        }
    }

    // pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Nothing to pop." << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }

    // peek operation
    void peek() {
        if (top == -1)
            cout << "Stack is empty." << endl;
        else
            cout << "Top element: " << arr[top] << endl;
    }

    // display stack
    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }

    // check if empty
    bool isEmpty() {
        return top == -1;
    }

    // check if full
    bool isFull() {
        return top == MAX - 1;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();

    s.pop();
    s.peek();

    s.push(40);
    s.push(50);
    s.push(60);  // overflow

    s.display();

    return 0;
}
