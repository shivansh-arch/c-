
#include <iostream>
#include <string>

using namespace std;

class student {
    private:
    string name;
    int age;
    public:
    void getdetail(){
        cout << name << " " << age;
    }
    void setD(string n, int a){
        name = n;
        age = a;
    }
};
int main(){
    student s1;
    s1.setD("shivansh", 19);
    s1.getdetail();

}
