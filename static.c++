#include <iostream>
using namespace std;

class Demo {
public:
    static int count;

    static void showCount() {
        cout << "Count = " << count << endl;
    }
};

int Demo::count = 10;

int main() {
    Demo::showCount(); // no object needed
}
