//C pointer to Array
#include <stdio.h>
int main() {
    int a[5]={5,10,15,20,25};
    int *p;
    int i;
    p=a; //pointer to array
    for(i=0;i<5;i++) {
        printf("The Address of a[%d] is %u\n",i,p);
        p++;
    }
return 0;
}