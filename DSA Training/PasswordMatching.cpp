#include <iostream>
#include <string.h>
using namespace std;
int main() {
    string s;
    string r;
    cin >> s;
    cin >> r;
    int t;
    cin >> t;
    int n = s.size();
    int arr[t];
    for(int i=0; i<t; i++){
        cin >> arr[i];
        int k = arr[i]%n;
        if(arr[i] >= 0){
            s = s.substr(n-k,k) + s.substr(0,n-k);
        }
        else{
            k=abs(k);
            s = s.substr(k,abs(n-k))+s.substr(0,k);
        }
    }
    if(r==s){
        cout << "Password Accepted" << endl;
    }
    else{
        cout << "Try Again" << endl;
    }
    return 0;
}