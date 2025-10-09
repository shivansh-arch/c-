#include <iostream>
#include <string>
using namespace std;

int main() {
    string message = "Hello, World!";
    
    for (int i = 0; i < message.length(); i++) {
        cout << message[i] << " "; // 
    }
    
    cout << endl << "Welcome to C++!" << endl; 
}
