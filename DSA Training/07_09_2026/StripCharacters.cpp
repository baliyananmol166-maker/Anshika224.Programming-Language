#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i=k; i<n-k; i++){
        cout << s[i];
    }
    return 0;
}