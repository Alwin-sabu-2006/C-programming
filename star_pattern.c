#include <stdio.h>

int main() {
    int n, i, j; 
    char start='*';
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) { 
        for (j = 0; j < i; j++) {
            printf("%c ", start);
            
        }
        printf("\n");
    }

    return 0;
}

