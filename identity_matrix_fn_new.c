#include <stdio.h>
int isIdentityMatrix(int matrix[50][50], int size);

int main() {
    int matrix[50][50];
    int size, i, j;


    printf("Enter the size of the matrix: ");
    scanf("%d", &size);


    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    if (isIdentityMatrix(matrix, size)) {
        printf("The given matrix is an Identity Matrix.\n");
    } else {
        printf("The given matrix is NOT an Identity Matrix.\n");
    }

    return 0;
}


int isIdentityMatrix(int matrix[50][50], int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if ((i == j && matrix[i][j] != 1) ||   
                (i != j && matrix[i][j] != 0)) {   
                return 0; 
            }
        }
    }
    return 1; 
}
