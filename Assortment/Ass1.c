//Q.1 Write a Program to find all the negative elements from a given 1D array.
#include<stdio.h>
void main()
{
    int s;
    printf("enter size");
    scanf("%d",&s);
    
    int a[s];
    printf("enter elements");
    for(int i=0;i<s;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("negative elements");
    for(int i=0;i<s;i++)
    {
        if(a[i]<0)
        {
            printf("%d",a[i]);
        }
    }
    printf("\n");
}