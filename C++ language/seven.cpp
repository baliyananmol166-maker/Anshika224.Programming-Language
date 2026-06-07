//perform multiple arithmetic operation in C++
#include <iostream>
using namespace std;
int main() {
    int a , b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    int sum = a+b;
    int mul = a*b;
    int div = a/b;
    int mod = a%b;
    int sub= a-b;

    cout<<"The sum of a and b: "<< sum << endl;
    cout<<"The subtraction of a and b: " <<sub << endl;
    cout<<"The multiplication of a and b: "<<mul <<endl;
    cout<<"The division of two number is : "<<div <<endl;
    cout<<"The modulus of two number is: " << mod << endl;
    return 0;
}