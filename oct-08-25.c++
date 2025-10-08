#include <iostream>
using namespace std;

int main() {
    string message = "Hello, World!";
    
    for (int i = 0; i < message.length(); i++) {
        cout << message[i] << " "; // prints each character with a space
    }
    
    cout << endl << "👋 Welcome to C++!" << endl; // adding a little emoji flair
    return 0;
}
