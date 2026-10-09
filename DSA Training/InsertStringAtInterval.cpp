#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int minVal = a[0], maxVal = a[0];
    for (int i = 1; i < n; i++) {
        minVal= min(minVal, a[i]);
        maxVal= max(maxVal, a[i]);
    }
    int minIndex =-1, maxIndex = -1;
    for (int i =0; i < n; i++) {
        if (a[i]== minVal && minIndex == -1)
            minIndex =i;
        if (a[i] ==maxVal && maxIndex == -1)
            maxIndex = i;
    }
    int left = min(minIndex, maxIndex);
    int right = max(minIndex, maxIndex);
    for (int i = left; i < right; i++) {
        cout << a[i] << " ";
    }
    // First part
    for (int i = 0; i < left; i++) {
        cout << a[i] << " ";
    }
    // Third part
    for (int i = right; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}