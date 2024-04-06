//Q-4:  Write a C program to find square of each element of an 1D array using Pointer.
#include <stdio.h>

int main() {
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    printf("The Square Of Each Element Is:\n");
    for(int i=0;i<10;i++){
        ptr=&a[i];
        printf("%d\n",((*ptr)*(*ptr)));
    }

    return 0;
}