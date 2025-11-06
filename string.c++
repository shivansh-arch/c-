#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Shivansh";
    string s2 = "Gupta";
    string s3 = name + s2;

    s2.append("hii");
    cout << "s3 = " << s3 << endl;
    cout << "s2 after append = " << s2 << endl;

    cout << "Length of name: " << name.length() << endl;
    cout << "Length of s2: " << s2.size() << endl;

    cout << "First character of name: " << name[0] << endl;
    cout << "Last character of s2: " << s2[s2.length() - 1] << endl;

    s2[0] = 'K';
    cout << "Modified s2: " << s2 << endl;

    cout<<"Find sh in name"<<": "<<name.find("sh");
    cout<<endl;

    string temp = "";
    if (temp.empty())
        cout << "temp is empty" << endl;
    else
        cout << "temp is not empty" << endl;
     name.insert(8, " Kumar");  
    cout << "After insert: " << name << endl;


    return 0;
}
