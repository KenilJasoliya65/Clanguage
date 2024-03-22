//Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
#include <stdio.h>
int main() {
    int rows, cols,i,j;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int array[rows][cols];
    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int row_number;
    printf("\nEnter row number: ");
    scanf("%d", &row_number);

    printf("Elements of row %d: ", row_number);
    int row_sum = 0;
    for (j = 0; j < cols; j++) {
        printf("%d", array[row_number][j]);
        row_sum += array[row_number][j];
        if (j < cols - 1)
            printf(", ");
    }
    printf("\nThe sum of row: %d\n", row_sum);

    int col_number;
    printf("\nEnter column number: ");
    scanf("%d", &col_number);

    printf("Elements of column %d: ", col_number);
    int col_sum = 0;
    for (i = 0; i < rows; i++) {
        printf("%d", array[i][col_number]);
        col_sum += array[i][col_number];
        if (i < rows - 1)
            printf(", ");
    }
    printf("\nThe sum of column: %d\n", col_sum);

    return 0;
}