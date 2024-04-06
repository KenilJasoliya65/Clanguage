//Q-1 :Create C program to check if character entered by the user is vowel or constant using a switch case.

#include <stdio.h>

int main() {
    char ch;
    printf("Enter Element:");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("The %c is a vowel.\n ",ch);
        break;
        default:
        printf("The %c is not a vowel.\n ",ch);
    }

    return 0;
}