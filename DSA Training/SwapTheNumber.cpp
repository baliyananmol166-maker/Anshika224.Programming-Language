#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,m,k;
    cin >> n >> m >> k;
    
    vector<vector<int>> mat(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j] ;
        }
        cout << endl;
    }
    //swap elements
    for(int i=0; i<n/2; i++){
        int lastRow = n-1-i;
        for(int j=0; j<k; j++){
            swap(mat[i][m-k+j], mat[lastRow][j]);
        }
    }
    //print the matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}