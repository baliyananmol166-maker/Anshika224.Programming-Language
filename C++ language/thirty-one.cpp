//another example of pointer
#include <iostream>
using namespace std;
int main() {
    int *ptr;
    int arr[] = {5,17,20,7,9,4,6};
    ptr=arr;
    for(int i=0; i<7;i++){
      cout<<*ptr<<endl;
      ptr++;
    }
    return 0;
}