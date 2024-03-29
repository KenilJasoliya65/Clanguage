//Q.1 Write a Program to find the average of a given 2D array.
#include <stdio.h>
int main()
{
    int r, c, i, j, sum = 0;
    float avg;

    printf("Enter the row size: ");
    scanf("%d", &r);
    printf("Enter the column size: ");
    scanf("%d", &c);

    int a[r][c];
    printf("Enter array elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum += a[i][j];
        }
    }

    avg = (float)sum / (r * c);
    printf("Average is: %.2f\n", avg);

    return 0;
}.