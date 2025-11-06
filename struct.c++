#include<iostream>
using namespace std;
struct Student
{
    int age;
    string name;
    char grade
    /* data */
};



union employee {
    int age;
    int salary;
    
};

int main() {
    employee e;
    e.age = 25; // same memory
    cout << "Age: " << e.age << endl;

    e.salary = 50000; // overwrites age
    cout << "Salary: " << e.salary << endl;

    // Notice: e.age is now garbage
    cout << "Age after writing salary: " << e.age << endl;
    return 0;
}
