#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // find the count of the number of elements to its right that are smaller than it
    int count[n];
    for(int i=0; i<n; i++){
        count[i]=0;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                count[i]++;
            }
        }
    }
    // print the count
    for(int i=0; i<n; i++){
        cout << count[i] << " ";
    }
    return 0;
}