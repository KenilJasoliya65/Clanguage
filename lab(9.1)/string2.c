//Q.2 Write a Program to convert the given string in lowercase without using any string function.
#include <stdio.h>
int main() {
    char a[100], lwr[100];
    int i;
    printf("Enter any string: ");
    fgets(a, sizeof(a), stdin);

    for (i = 0; a[i] != '\0'; i++) {
     
        if (a[i] >= 'A' && a[i] <= 'Z') {
         
            lwr[i] = a[i] + ('a' - 'A');
        } else {
          
            lwr[i] = a[i];
        }
    }
    lwr[i] = '\0'; 
    printf("Lowercase string: %s\n", lwr);
    return 0;
}