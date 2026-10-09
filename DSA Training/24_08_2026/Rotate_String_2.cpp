#include <iostream>
#include <string>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    // rotate the string s towards right
    k = k%n;
    string rr_s = s.substr(n-k,k) + s.substr(0,n-k);
    cout << rr_s << endl;
    return 0;
}