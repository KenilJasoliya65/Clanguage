//Q.2 Write a Program to find the largest element from a given 2D array.

#include<stdio.h>
void main()
{
    int r , c , i , j;
    printf("enter r size:");
    scanf("%d",&r);
    printf("enter c size:");
    scanf("%d",&c);
    
    int arr[r][c];
    printf("enter array elements \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    int largest = arr[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]>largest)
            {
                largest = arr[i][j];
            }
        }
    }
    printf("largest elements %d",largest);
}