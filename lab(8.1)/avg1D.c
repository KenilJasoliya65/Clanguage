//Q.2 Write a Program to find the average of a 1D array.

#include <stdio.h>

void main() {
    int a,i , sum=0 , avg;
    printf("enter size :");
    scanf("%d",&a);
    
    int arr[a];
    printf("enter numbers :\n");
    for(i=0;i<a;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&arr[i]);
        sum +=arr[i];
    }
    avg = sum/5;
    printf("avg is:  %d ",avg);
}
