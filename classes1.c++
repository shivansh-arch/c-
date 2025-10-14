
#include <iostream>
#include <string>

using namespace std;

class student {
    public:
    string name;
    int age;
    void getdetail(){
    cout<<name<<" "<<age;
}
};
int main(){
    student s1;
    s1.name ="shivansh";
    s1.age=19;
    s1.getdetail();

}
