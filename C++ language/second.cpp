//to print and get a string in C++
#include <iostream>
using namespace std;
int main() {
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    cout<<"You have entered the string is: ";
    cout<<s<<endl;
    return 0;
}