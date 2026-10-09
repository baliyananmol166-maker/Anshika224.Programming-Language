#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    // rotate the string towards left by k positions
    k=k%n;
    string lr_s = s.substr(k,n-k) + s.substr(0,k);
    cout << lr_s << endl;
    return 0; 
}