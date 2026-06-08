//call by reference
#include <iostream>
using namespace std;
void swap(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}
int main() {
    //it will swap the number.
    int m=200;
    int n=120;
    swap(m,n);
    cout<<"The value of m is: "<<m<<endl;
    cout<<"The value of n is: "<<n<<endl;
    return 0;
}
