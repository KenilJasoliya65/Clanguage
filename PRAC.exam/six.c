//Q-6: Write a C program that writes any 3 students' name alomg with their course in a file called data.txt by taking input from user dynamically.
#include <stdio.h>

int main() {
    FILE *file;
    char name[3][50];
    char course[3][50];

    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter details for 3 students:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d Name: ", i + 1);
        fgets(name[i], sizeof(name[i]), stdin);
        printf("Student %d Course: ", i + 1);
        fgets(course[i], sizeof(course[i]), stdin);
    }

    for (int i = 0; i < 3; i++) {
        fprintf(file, "Student Name: %s", name[i]);
        fprintf(file, "Course: %s", course[i]);
    }
    fclose(file);
    printf("Data written to data.txt successfully!\n");

    return 0;
}