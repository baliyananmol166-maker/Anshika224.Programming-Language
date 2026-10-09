#include <iostream>
using namespace std;
int main() {
    string s1,s2;
    int n;
    getline(cin,s1);
    getline(cin,s2);
    cin >> n;
    for(int i=0; i<s1.length(); i++){
        cout << s1[i];
        if((i+1)%n==0 && i+1 < s1.length()){
            cout << s2;
        }
    }
    return 0;
}