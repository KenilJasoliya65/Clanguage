//Q.2 Write a Program to count the frequency of each character in a given string.
#include <stdio.h>
#include <string.h>
int main()
{
    char name[20], name2[20];
    int i, j = 0, len, status = 0;
    printf("\n Enter your name:");
    gets(name);
    len = strlen(name);
    for (i = len - 1; i >= 0; i--)
    {
        name2[j] = name[i];
        j++;
    }
    name[j] = '\0';
    for (i = 0; i < len; i++)
    {
        if (name[i] == name2[i])
        {
            status = -1;
        }
        else
        {
            status = 0;
            break;
        }
    }
    if (status == 0)
    {
        printf("\n Not a Palindrome.");
    }
    else
    {
        printf("\n Palindrome.");
    }
    return 0;
}