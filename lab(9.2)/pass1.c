//Q.1 Write a Program to check if a given password is strong or not by satisfying the below criteria:
//- Password must contain at least one letter, one digit & one special symbol.
//- Password must be at least 6 characters.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isStrongPassword(char password[]) {
    int hasLetter = 0, hasDigit = 0, hasSpecialSymbol = 0;
    int length = strlen(password);
    
    if (length < 6)
        return 0;

    for (int i = 0; i < length; i++) {
        if (isalpha(password[i])) {
            hasLetter = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        } else if (!isalnum(password[i])) {
            hasSpecialSymbol = 1;
        }
    }

    return (hasLetter && hasDigit && hasSpecialSymbol);
}

int main() {
    char password[50];

    printf("Enter the password: ");
    scanf("%s", password);

    if (isStrongPassword(password)) {
        printf("Strong password\n");
    } else {
        printf("Weak password\n");
    }

    return 0;
}
