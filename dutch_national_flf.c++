#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 0, 1, 2, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low++], arr[mid++]);
        } else if (arr[mid] == 1) {
            mid++;
        } else { 
            swap(arr[mid], arr[high--]);
        }
    }

   
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
