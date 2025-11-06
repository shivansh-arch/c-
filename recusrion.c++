#include<iostream>
using namespace std;
void printnumber(int n){
    if(n==0)return ;
    printnumber(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter the number: "<<" ";
    cin>>n;
    printnumber(n);

}