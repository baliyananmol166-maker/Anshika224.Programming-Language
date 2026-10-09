#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}
int next(int& num){
   while(!prime(num)){
    num++;
   }
   return num++;
}
int main(){
    int n;
    cin >> n;
    int num=2;
    int p=0;
    while(p<n){
        int p1 = next(num);
        int p2 = next(num);
        if(p++ < n){
            cout << p1 << " ";
        }
        if(p++ < n){
            cout << p2 << " ";
        }
        if(p++ < n){
            cout << p1*p2 << " ";
        }
    }
    return 0;
}