//example of array
#include <iostream>
using namespace std;
int main() {
    int coupon[6]={3,6,4,5,3,1};
    for(int i=0; i<6; i++){
        cout<<"The element of coupon :"<<coupon[i]<<endl;
        //print the element of index
        cout<<"The element present in index 3: "<< coupon[3]<<endl;
    }
    return 0;
}