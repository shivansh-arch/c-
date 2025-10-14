
#include <iostream>
#include <string>

using namespace std;
class student {
    public:
        string name;
        student(string n){
            name = n;
        }
        void getname(){
            cout << name << endl;
        }
};
int main(){
    student s1("Test name");
    s1.getname();
    return 0;
}