//Q.1 Write a Program to find the cube of a given number using UDF.For example,
#include <stdio.h>
int cube()
{
    int r;
    printf("Enter r:");
    scanf("%d", &r);
    return r * r * r;
}

int main()
{
    printf("cube is: %d", cube());
}