#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Enter the principal: ";
    cin>>p;
    cout<<"Enter the rate: ";
    cin>>r;
    cout<<"Enter the time: ";
    cin>>t;
    float si=(p*r*t)/100;
    cout<<"The simple interest is: "<< si;
}