//Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.

#include <stdio.h>
int main()
{
    int *p, i, n, a[20];
    printf("\n Enter size:");
    scanf("%d", &n);
    printf("\n Array Elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    p = &a;
    for (i = 0; i < n; i++)
    {
        printf("%d ", (*p) * (*p));
        p++;
    }
    return 0;
