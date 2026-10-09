#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // move all zeros to the end of the array
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            count++;
        }
    }
    int newArr[n];
    int j=0; // j is the index for newArr
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            newArr[j++]=arr[i]; // here j++ is used to increment the index of newArr after assigning the value
        }
    }
    for(int i=0; i<count; i++){
        newArr[j++]=0;
    }
    // print the new array
    for(int i=0; i<n; i++){
        cout << newArr[i] << " ";
    }
    return 0;
}