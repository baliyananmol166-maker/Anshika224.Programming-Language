#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int ans[n];
    int s[n];
    int top=-1;
    for(int i=0; i<n; i++){
        cin >> a[i];
        ans[i]=0;
    }
     for (int i = n - 1; i >= 0; i--) {
        while (top >= 0 && s[top] <= a[i]) {
            top--;
        }
        if (top >= 0) {
            ans[i] = s[top];
        }
        s[++top] = a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}