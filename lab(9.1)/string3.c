//Q.3 Write a Program to convert the given string in toggle case without using any string function.
#include <stdio.h>
int main()
{
    char a[100], tgl[100];
    int i;
    printf("Enter any string: ");
    fgets(a, sizeof(a), stdin);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {

            tgl[i] = a[i] - 'a' + 'A';
        }

        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            tgl[i] = a[i] - 'A' + 'a';
        }
        else
        {

            tgl[i] = a[i];
        }
    }
    tgl[i] = '\0';
    printf("Togglecase string: %s\n", tgl);

    return 0;
}