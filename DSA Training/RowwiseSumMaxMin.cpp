#include <iostream>
#include <vector>
#include <algorithm>
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
    for(int i=0; i<n; i++){
        int sum =0;
        int max1 = mat[i][0];
        int min1 = mat[i][0];
        for(int j=0; j<m; j++){
            sum += mat[i][j];
            max1 = max(max1, mat[i][j]);
            min1 = min(min1, mat[i][j]);
        }
        cout << sum << " " << max1 << " " << min1 << endl;
    }
    return 0;
}