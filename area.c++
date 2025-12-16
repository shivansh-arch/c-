#include <iostream>
using namespace std;

class Rectangle {
    int area;   
public:
    Rectangle(int l, int b) {     
        area = l * b;
    }

    void showArea() {
        cout << "Area = " << area << endl;
    }
};

int main() {
    Rectangle r(10, 5);  
    r.showArea();
}
