//Q.3 Write a Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same.

#include<stdio.h>
void main()
{
    int s;
    printf("enter size \n");
    scanf("%d",&s);
    
    int a[s],b[s],c[s],i;
    printf("enter a numbers \n");
    for(i=0;i<s;i++)
    {
        printf("a is a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("enter b numbers \n");
    for(i=0;i<s;i++)
    {
        printf("b is b[%d]",i);\
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<s;i++)
    {
        c[i]=a[i]+b[i];
    }
    for(i=0;i<s;i++)
    {
        printf("%d",c[i]);
        if(i<s-1)
        {
            printf(" , ");
        }
    }
    // printf("sum is",c[i]);
}