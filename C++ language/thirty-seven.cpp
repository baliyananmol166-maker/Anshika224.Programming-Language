//another example of class in C++
#include <iostream>
using namespace std;
class Gambit{
    public:
    Gambit() {
        cout<<"Hello! I am constructor."<<endl;
    }
    ~Gambit() {
        cout<<"Hello! I am destructor."<<endl;
    }
    void display() {
        cout<<"Hello!"<<endl;
    }
};
int main() {
    Gambit gam;
    gam.display();

    return 0;
}