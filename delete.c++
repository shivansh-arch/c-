#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 5, 6};
    int n = 5; 
    int deletee=3;
    for(int i=deletee;i<n;i++){
        arr[i]=arr[i+1];
    
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}