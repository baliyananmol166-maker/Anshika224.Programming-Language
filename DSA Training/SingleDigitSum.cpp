#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    int res;
    if(n==0){
        res=0;
    }
    if(n%9 == 0){
        res = 9;
    }
    else{
        res = n%9;
        res = res*k;
    }
    
    cout << res << endl;
    return 0;
}