#include<iostream>
#include <vector>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }
    //print submatrix
    for(int i=1; i<n-2; i++){
        for(int j=1; j<m-2; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}