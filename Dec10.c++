#include<iostream>
using namespace std;

class A{
public:
    void Show(){
        cout<<"I am in A\n";
    }
};

class B{
public:
    void show(){
        cout<<"I am in B\n";
    }
};

class C : public A, public B{
public:
    void callBoth(){
        A::Show();
        B::show();
    }
};

int main(){
    C obj;
    obj.callBoth();
}
