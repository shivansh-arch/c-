#include<iostream>
using namespace std;

class A{
public:
    A(){
        cout<<"Class A created\n";
    }
    ~A(){
        cout<<"Class A destroyed\n";
    }
};

class B : public A{
public:
    B(){
        cout<<"Class B created\n";
    }
    ~B(){
        cout<<"Class B destroyed\n";
    }
};

class C : public B{
public:
    C(){
        cout<<"Class C created\n";
    }
    ~C(){
        cout<<"Class C destroyed\n";
    }
};

int main(){
    C obj;
}
