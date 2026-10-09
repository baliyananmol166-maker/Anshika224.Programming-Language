#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // find the count of the students whose height is not in the correct position
    int count = 0;
    vector<int> sortedArr(arr, arr+n);
    sort(sortedArr.begin() , sortedArr.end());
    for(int i=0; i<n; i++){
        if(arr[i] != sortedArr[i]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}