#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "I am A" << endl;
    }
};

class B : public A {   
public:
    void showB() {
        cout << "I am B" << endl;
    }
};

class C :public B{
    public:
    void showC(){ 
        cout<<"I am C"<<endl;
    }
};

int main() {
    C obj;
    obj.showA();   
    obj.showB();   
    obj.showC();
}
