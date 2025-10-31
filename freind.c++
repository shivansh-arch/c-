#include <iostream>
using namespace std;

class B;  // Forward declaration

class A {
private:
    int a;
public:
    void setData(int x) {
        a = x;
    }

    friend void comp(A, B);
};

class B {
private:
    int b;
public:
    void setData(int y) {
        b = y;
    }

    friend void comp(A, B);
};

void comp(A obj1, B obj2) {
    if (obj1.a > obj2.b)
        cout << "A is greater" << endl;
    else
        cout << "B is greater" << endl;
}

int main() {
    A x;
    B y;

    x.setData(10);
    y.setData(20);

    comp(x, y);

    return 0;
}
