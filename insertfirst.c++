#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4}; 
    int n = 5;
    for(int i = 4; i > 0; i--){ 
        if(i==0){

        }
        else{
            arr[i]=arr[i-1];
        }

        arr[0]=n;
    }
}