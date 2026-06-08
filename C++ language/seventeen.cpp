//call by value
#include <iostream>
using namespace std;
void swapit(int x, int y) {
    int temp=x;
    x=y;
    y=temp;
}
int main() {
    //it does not change the value of x and y 
    int x=120;
    int y=150;
    swapit(x,y);
    cout<<"X's value is:"<<x<<endl;
    cout<<"Y's value is:" << y<<endl;
    return 0;
}