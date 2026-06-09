//binary operator overloading
#include <iostream>
using namespace std;
class Complex{
    private:
    int real;
    int imag;

    public:
    void input() {
        cout<<"Enter the real and imaginary part respectively: "<<endl;
        cin>>real;
        cin>>imag;
    }
    Complex operator+ (Complex obj) {
        Complex temp;
        temp.real = real+ obj.real;
        temp.imag = imag+obj.imag;
        return temp;
    }
    void output() {
        cout<<"Output is: "<<real<<"+"<<imag<<"i";
    }
};
int main() {
    Complex com1, com2, res;
    cout<<"Enter the first complex number i.e\n";
    com1.input();
    cout<<"Enter the second complex number i.e\n";
    com2.input();

    res= com1+com2;
    res.output();
    return 0;
}