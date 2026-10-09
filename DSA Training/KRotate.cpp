#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k = 0;
    for(char c : s){
        //check the number
        if(isdigit(c)){
            // convert character digit into number
            int digit = c-'0';
            k += digit * digit;
        }
    }
    if(k%2==0){
        //rotate the alphabets of s rightwards by k position
        k = k%n;
        string rr_s = s.substr(n-k, k) + s.substr(0,n-k);
        cout << rr_s << endl;
    }
    else {
        //rotate the alphabets of s leftwards by k position
        k = k%n;
        string lr_s = s.substr(k,n-1) + s.substr(0,k);
        cout << lr_s << endl;
    }
    return 0;
}