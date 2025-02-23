#include <stdio.h>

int main() {
    int a[10][10], row1, col1, i, j;
    int rowsum, columnsum;

    // Taking input for matrix dimensions
    printf("Enter the row size for 1st matrix: ");
    scanf("%d", &row1);
    printf("Enter the column size of 1st matrix: ");
    scanf("%d", &col1);

    // Taking input for matrix elements
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Calculating sum of each row
    for (i = 0; i < row1; i++) {
        rowsum = 0;  // Reset for each row
        for (j = 0; j < col1; j++) {
            rowsum += a[i][j];
        }
        printf("Sum of elements of row %d: %d\n", i + 1, rowsum);
    }

    // Calculating sum of each column
    for (j = 0; j < col1; j++) {
        columnsum = 0;  // Reset for each column
        for (i = 0; i < row1; i++) {
            columnsum += a[i][j];
        }
        printf("Sum of elements of column %d: %d\n", j + 1, columnsum);
    }

    return 0;
}
