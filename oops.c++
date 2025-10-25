#include<iostream>
using namespace std;
class employee{
    private:
        int a, b;
        int c;
        int d;
        int e;
    public:
        void setdate(int a,int b,int c,int d,int e);
        void getdate() const;
};

void employee::setdate(int a_, int b_, int c_, int d_, int e_) {
    a = a_;
    b = b_;
    c = c_;
    d = d_;
    e = e_;
}

void employee::getdate() const {
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e<<endl;
}

int main(){
    employee emp;
    emp.setdate(1,2,3,4,5);
    emp.getdate();
    return 0;
}