#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    string newS = "";
    string newS1 = "";
    for(int i=0; i<s.size(); i++){
        if((i+1)%4==0 || (i+1)%6==0){
            newS += s[i];
        }
        else{
            newS1 += s[i];
        }
    }
    cout << newS1 + newS << endl;
    return 0;
}