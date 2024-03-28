//Q.2 Write a c Program to create a login mechanism by entering the right email & //password. You can compare it with your desired email & password.
#include <stdio.h>
#include <string.h>

#define MAX_EMAIL_LENGTH 50
#define MAX_PASSWORD_LENGTH 50

// Function to compare email and password
int checkCredentials(char email[], char password[]) {
    char desiredEmail[] = "example@example.com";
    char desiredPassword[] = "password123";

    if (strcmp(email, desiredEmail) == 0 && strcmp(password, desiredPassword) == 0) {
        return 1; // Credentials match
    } else {
        return 0; // Credentials don't match
    }
}

int main() {
    char email[MAX_EMAIL_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    printf("Enter your email: ");
    scanf("%s", email);

    printf("Enter your password: ");
    scanf("%s", password);

    if (checkCredentials(email, password)) {
        printf("Login successful\n");
    } else {
        printf("Invalid email or password\n");
    }

    return 0;
}
