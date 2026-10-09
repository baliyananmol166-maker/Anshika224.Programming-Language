#include <iostream>
#include <string>
using namespace std;
int main(){
    int n; 
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n; i++){
        int next = -1;
        for(int j=i+1; j<n; j++){
            if(s[i] == s[j]){
                next = j-i-1;
                break;
            }
        }
        if(next == -1){
            cout << -1 << " ";
        }
        else{
            cout << next << " ";
        }
    }
    return 0;
}