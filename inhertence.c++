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


int main() {
    B obj;
    obj.showA();   
    obj.showB();   
}
