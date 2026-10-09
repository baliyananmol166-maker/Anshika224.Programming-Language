#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // print the array in order-smallest num,largest num,2nd smallest num,2nd largest num and so on
    vector<int> sortedArr(arr,arr+n);
    sort(sortedArr.begin(),sortedArr.end());
    int i=0;
    int j=n-1;
    while(i<=j){
        if(i==j){
            cout << sortedArr[i] << endl;
        }
        else{
            cout << sortedArr[i] << " " << sortedArr[j] << " ";
        }
        i++;
        j--;
    }
    
    return 0;
}