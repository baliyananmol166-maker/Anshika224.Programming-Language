#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // determine the rank of each student
    int rank[n];
    for(int i=0; i<n; i++){
        rank[i] = 1; 
        for(int j=0; j<n; j++){
            if(arr[j] > arr[i]){
                rank[i]++;
            }
        }
    }
    // print the rank of each student
    for(int i=0; i<n; i++){
        cout << rank[i] << " ";
    }
    return 0;
}