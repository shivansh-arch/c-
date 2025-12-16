#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"I am in class A";
    }
};
class B:public A{
    public:
    void show(){
        cout<<"I am in class B";
    }
};

int main(){
    B ob;
    ob.show();
    return 0;
}