//make a class in C++
#include <iostream>
using namespace std;
class Franchise {
    public:
    void KFC() {
        cout<<"We have the best chicken."<<endl;
    }
    void BurgerKing() {
        cout<<"We have best burger."<<endl;
    }
};

int main() {
    Franchise fran;
    fran.KFC();
    fran.BurgerKing();

    return 0;
}