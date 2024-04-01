//Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.For example,

#include <stdio.h>
int Length(char *str) {
    int length = 0;
    while (*str != '\0') 
    {
        length++;
        str++;
    }
    return length;
}
int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int length = Length(str);

    printf("Length of the string: %d\n", length);

    return 0;
}