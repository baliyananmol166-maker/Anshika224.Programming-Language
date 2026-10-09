#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,y;
    cin >> x >> y;
    for(int i=x; i<=y; i++){
        int n = i;
        int sum = 0;
        int digit1 = n%10;
        int digit2 = (n/10)%10;
        int digit3 = (n/100)%10;
        sum = pow(digit1,3) + pow(digit2,3) + pow(digit3,3);
        if(sum == n){
            cout << n << endl;
        }
    }
    
    return 0;
}