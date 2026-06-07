//perform operation in C++
#include <iostream>
using namespace std;
int main() {
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);

    s.push_back('Y');  //it add the element in the end of string.
    cout<<"After using push back :"<<s<<endl;

    s.pop_back();  //it delete the last element from the end of string.
    cout<<"After using pop back: "<<s<<endl;
    return 0;
}