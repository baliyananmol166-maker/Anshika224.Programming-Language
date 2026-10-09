#include <iostream>
#include <string>
using namespace std;
int main() {
    int n,m,k;
    cin >> n >> m >> k;
    string s1,s2;
    cin >> s1 >> s2;
    // rotate s1 rightwards by k positions
    k = k%n;
    string rr_s1 = s1.substr(n-k, k) + s1.substr(0,n-k);
    // rotate s2 leftwards by k positions
    k = k%m;
    string lr_s2 = s2.substr(k,m-k) + s2.substr(0,k);
    // combine s1 and s2 in string s3
    string s3 = rr_s1 + lr_s2;
    cout << s3 << endl;
    //check s3 is palindrome or not
    string s = " ";
    for(int i=s3.length()-1; i>=0; i--){
        s += s3[i];
    }
    if(s==s3){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    return 0;

}