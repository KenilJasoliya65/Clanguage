//Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
#include <stdio.h>

int cube(int num) {
    return num * num * num;
}

void findCubes(int *arr, int rows, int cols) {
    printf("Cubes of all elements from the given 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", cube(*(arr + i * cols + j)));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns of the 2D array: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    findCubes(&arr[0][0], rows, cols);

    return 0;
}