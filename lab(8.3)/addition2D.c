//Q.2 Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that both array sizes must be the same.
#include <stdio.h>
int main()
{
    int r, c, i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int ary_A[r][c], ary_B[r][c], ary_C[r][c];

    printf("Enter A value:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &ary_A[i][j]);
        }
    }

    printf("Enter B value:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &ary_B[i][j]);
        }
    }

    printf("Array C is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            ary_C[i][j] = ary_A[i][j] + ary_B[i][j];
            printf("%d ", ary_C[i][j]);
        }
        printf("\n");
    }

    return 0;
}