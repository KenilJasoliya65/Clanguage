//Q.3 Write a Program to find the sum of diagonal elements from a given 2D array.
#include <stdio.h>
int main()
{
    int s, i, j, sum = 0;

    printf("Enter the size: ");
    scanf("%d", &s);

    int a[s][s];
    printf("Enter array's elements:\n");
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < s; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < s; i++)
    {
        sum += a[i][i];
    }
    printf("The sum of diagonal is: %d\n", sum);
    return 0;
}