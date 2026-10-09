#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    string s1 = "";
    for(int i=0; i<n; i+=k){
        string chunk = s.substr(i,k);
        if((i/k)%2==1){
            reverse(chunk.begin(),chunk.end());
        }
        s1 += chunk;
    }
    cout << s1 << endl;
    return 0;
}