#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    bool has1=false;
    bool has2 = false;
    for(char ch : s){
        if(ch=='&'){
            has1 = true;
        }
        if(ch=='#'){
            has2=true;
        }
    }
    if(has1 && has2 && s.length() % 2==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}