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
int ci = p * pow(1 + r / 100.0, t);
cout<<"The ci is: "<<ci;



}