#include <iostream>
using namespace std;
int main(){
    int a=10,b=12,c=13;
    (a>b||a>c)?cout<<"a is the max":(b>c)?cout<<"b is the max":cout<<"c is the max";
}