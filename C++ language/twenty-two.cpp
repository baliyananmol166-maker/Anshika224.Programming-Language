//another example of function
#include <iostream>
using namespace std;
int max(int n1, int n2){
    if(n1>n2){
      cout<<"n1 is larger than n2.";
    }
    else{
        cout<<"n2 is larger than n1.";
    }
}
int main() {
    int n1;
    int n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    max(n1,n2);
    return 0;
}