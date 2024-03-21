//Q.1 Write a Program to find the length of a 1D array.

#include <stdio.h>

void main() {
    int a,i;
    printf("enter size");
    scanf("%d",&a);
    
    int arr[a];
    printf("enter numbers\n");
    for(i=0;i<a;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&arr[i]);
    }
}
