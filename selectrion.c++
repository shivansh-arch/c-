#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 34, 5, 56, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
                minindex = j;
        }
        swap(arr[i], arr[minindex]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}