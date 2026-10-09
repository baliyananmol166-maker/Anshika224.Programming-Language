#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int countOdd =0;
    int countEven=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%2==0){
        countEven++;
        }
        else{
        countOdd++;
        }
    }
    
    if(countEven > countOdd){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
    return 0;
}