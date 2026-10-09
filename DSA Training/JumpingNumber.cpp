#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    for(int i=0; i<=x; i++){
        int digit1 = i%10;
        int digit2 = (i/10)%10;
        if(digit2 == 0){
            cout << i << endl;
        }
        else{
            int diff = abs(digit1 - digit2);
            if(diff == 1){
                cout << i << endl;
            }
        }
    }
    return 0;
}