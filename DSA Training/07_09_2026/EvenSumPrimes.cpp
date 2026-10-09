#include <iostream>
using namespace std;
int prime (int n){
    if(n<=1){
        return 0;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main() {
    int a,b;
    cin >> a >> b;
    int count = 0;
    for(int i=a; i<=b; i++){
        if(prime(i)){
            int d1 = i/10;
            int d2 = i%10;
            if((d1+d2)%2==0){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}