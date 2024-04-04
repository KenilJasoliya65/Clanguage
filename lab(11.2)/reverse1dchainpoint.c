//Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Enter Two values: ");
    scanf("%d %d", &x,&y);
    

    printf("\nBefore swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    swap(&x, &y);

    printf("\nAfter swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}