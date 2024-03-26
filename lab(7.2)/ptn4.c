#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (k = 1; k < 6 - i; k++)
        {
            printf("%d ", (k + i) % 2);
        }
        printf("\n");
    }
    return 0;
}
