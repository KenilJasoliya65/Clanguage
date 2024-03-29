//Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int i, j, freq;
    printf("Enter any string: ");
    fgets(str, MAX_SIZE, stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Frequency of each letter:\n");
    for (i = 0; str[i] != '\0'; i++)
    {
        freq = 1;
        if (str[i] == '0')
            continue;
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                freq++;
                str[j] = '0';
            }
        }
        printf("%c => %d\n", str[i], freq);
    }

    return 0;
}