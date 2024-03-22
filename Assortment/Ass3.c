//Q.3 Write a Program to find the transpose matrix of a given 2D array.
#include<stdio.h>
void main()
{
    int m , n , i , j , a[5][5],t[5][5],r, sum=0;
    printf("enter row & column: ");
    scanf("%d %d",&m,&n);
    
    printf("enter elements");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("matrix : \n");
    for(i=0;i<m;i++);
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
            t[i][j] = a[j][i];
        }
        printf("\n");
    }
    
    printf("transpose matrix:  \n");
    for(i=0 ;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
}