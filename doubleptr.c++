#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *y=&a;
    int **x=&y;
    cout<<**x;
    cout<<endl;
    cout<<*y;
}