#include <iostream>
using namespace std;
int main() {
    int start;
    int end;;
    cin >> start >> end;
    int count = 0;
    
    for (int i = start; i<=end; i++){
        if (i%3==0){
            int sum;
            sum = i/10 + i%10;
            if(sum%2==0){
                count += 1;
            } 
        }
    }
    cout << count << endl;
    return 0;
}