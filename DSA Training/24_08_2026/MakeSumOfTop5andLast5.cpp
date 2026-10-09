#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> marks(n);
    for(int i=0; i<n; i++){
        cin >> marks[i];
    }
    sort(marks.begin(), marks.end(), greater<int>());
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }
    cout << sum << endl;
    for (int i= n - 5; i < n; i++) {
        cout << marks[i];
        if (i < n - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}