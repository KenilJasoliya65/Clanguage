//Q.1 Write a Program to convert the given string in uppercase without using any string function.
#include <stdio.h>
int main()
{
    char a[100], upr[100];
    int i;
    printf("Enter any string: ");
    fgets(a, sizeof(a), stdin);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            upr[i] = a[i] - 'a' + 'A';
        }
        else
        {
            upr[i] = a[i];
        }
    }
    upr[i] = '\0';
    printf("Uppercase string: %s\n", upr);
    return 0;
}