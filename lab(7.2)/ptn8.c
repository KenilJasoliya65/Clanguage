#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf("%d ", j);
        }
        for (k = 0; k < 2 * i; k++)
        {
            printf("  ");
        }
        for (j = 5 - i; j >= 1; j--)
        {
            if (j == 5 && i != 0)
                continue;
            printf("%d ", j);
        }
        printf("\n");
    }
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j <= i + 1; j++)
        {
            printf("%d ", j);
        }
        for (k = 0; k < 2 * (5 - i - 1); k++)
        {
            printf("  ");
        }
        for (j = i + 1; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
