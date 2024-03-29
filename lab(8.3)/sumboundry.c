//Q.4 Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.
#include <stdio.h>
int main()
{
    int a[5][5], i, j, sum = 0;
    printf("Enter array elements:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The boundary array:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 0 || i == 4 || j == 0 || j == 4)
            {
                printf("%d ", a[i][j]);
                sum += a[i][j];
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nThe sum of boundary is: %d\n", sum);

    return 0;
}