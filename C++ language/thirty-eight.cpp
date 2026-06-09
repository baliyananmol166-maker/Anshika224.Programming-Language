//OOPS in C++
//1.Inheritance
#include<iostream>
using namespace std;

class parent{
    public:
    string name1="Anshika";
};
//child class inherit the property from parent child
class child : public parent{
    public:
    string name2="Raghuvanshi";
};

int main() {
    child ch;
    cout<<ch.name1 + " " + ch.name2;
    return 0;
}