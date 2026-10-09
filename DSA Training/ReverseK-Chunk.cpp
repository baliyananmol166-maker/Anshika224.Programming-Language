#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    string result = "";
    k = k % n;
    for(int i=0; i<n; i+= k){
        string part = s.substr(i,k);
        if(i%k == 1){
            reverse(part.begin(), part.end());
        }
        result += part;
    }
    cout << result << endl;
    return 0;
}