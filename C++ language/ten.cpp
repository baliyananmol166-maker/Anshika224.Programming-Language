//another example of for loop in C++
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number :";
    cin>>n;
    //Printing the table of any number n.
    for(int i=1; i<=10; i++) { 
        int mul = i*n;
        cout<<n<<" * "<<i<<" = "<<mul<<endl;
    }
    return 0;
}