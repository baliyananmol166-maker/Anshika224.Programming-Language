//2.Polymorphism
#include <iostream>
using namespace std;
class Animal{
    public:
    void speed() {
        cout<<"Who is more faster?"<<endl;
    }
};
class Dolphin : public Animal{
    public:
    void speed() {
        cout<<"I'm faster in water."<<endl;
    }    
};
class Cheetah : public Animal{
    public:
    void speed() {
        cout<<"I'm faster on land."<<endl;
    }
};
int main() {
    Animal a;
    Cheetah c;
    Dolphin d;

    a.speed();
    c.speed();
    d.speed();

    return 0;
}