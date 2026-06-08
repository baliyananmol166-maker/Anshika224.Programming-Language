//example of do-while loop in C++
#include <iostream>
using namespace std;
int main() {
    int i=0;
    int sum=0;
    do{
        sum = sum+i;
        i++;
    }
    while(i<10); {
        cout<<"Sum is :"<< sum<<endl;
    }
    return 0;
}