//if-else statement in C++
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n>0){
        cout<<"It is a positive number."<<endl;
    }
    else if(n==0){
        cout<<"It is zero."<<endl;
    }
    else {
        cout <<"It is negative number."<<endl;
    }
    return 0;
}