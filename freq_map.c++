#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 7, 89, 42};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxx = arr[0];  // assume first element is max

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxx) {
            maxx = arr[i];
        }
    }
   

}
