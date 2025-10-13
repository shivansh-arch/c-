#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 5, 6};
    int n = 5;   
    int index = 3; 
    int value = 4;

    
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[index] = value;
    n++;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
