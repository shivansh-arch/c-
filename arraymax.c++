#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 20, 15, 5, 30};
    int n = 5;

    int max1 = INT_MIN;   
    int max2 = INT_MIN;   
    int max3 = INT_MIN;   
    int minVal = INT_MAX; 

    for(int i = 0; i < n; i++) {
        int num = arr[i];

        // update max values
        if(num > max1) {
            max3 = max2;
            max2 = max1;
            max1 = num;
        } else if(num > max2 && num != max1) {
            max3 = max2;
            max2 = num;
        } else if(num > max3 && num != max1 && num != max2) {
            max3 = num;
        }

        // update min
        if(num < minVal) {
            minVal = num;
        }
    }

    cout << "Maximum: " << max1 << endl;
    cout << "Second Maximum: " << max2 << endl;
    cout << "Third Maximum: " << max3 << endl;
    cout << "Minimum: " << minVal << endl;

    return 0;
}
