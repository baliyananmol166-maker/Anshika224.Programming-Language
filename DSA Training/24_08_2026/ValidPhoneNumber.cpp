#include <iostream>
using namespace std;
int main() {
    int n,x;
    cin >> n >> x;
    int bill = n*x;
    if(bill >= 10000 && bill <= 99999){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}