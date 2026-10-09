#include <iostream>
using namespace std;
int main() {
    int n,m;                             
    cin >> n >> m;
    int a[n], b[m];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    for(int i=0; i<m; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(a[j] >  b[i]){
                count++;
            }
        }
        cout << count << " ";
    }
    return 0;
}