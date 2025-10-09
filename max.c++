#include <iostream>
using namespace std;

// Function to find the maximum of three numbers
int findMax(int a, int b, int c) {
    if(a > b && a > c)
        return a;
    else if(b > c)
        return b;
    else
        return c;
}

// Function to find the minimum of three numbers
int findMin(int a, int b, int c) {
    if(a < b && a < c)
        return a;
    else if(b < c)
        return b;
    else
        return c;
}

// Function to find the second largest of three numbers
int findSecond(int a, int b, int c) {
    if((a > b && a < c) || (a < b && a > c))
        return a;
    else if((b > a && b < c) || (b < a && b > c))
        return b;
    else
        return c;
}

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Maximum: " << findMax(a, b, c) << endl;
    cout << "Minimum: " << findMin(a, b, c) << endl;
    cout << "Second Largest: " << findSecond(a, b, c) << endl;

    return 0;
}
