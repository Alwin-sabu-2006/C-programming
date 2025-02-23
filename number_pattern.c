#include <stdio.h>

int main() {
    int n, i, j, start;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        start = i % 2; // 1 for odd rows, 0 for even rows
        for (j = 0; j < i; j++) {
            printf("%d ", start);
            start = 1 - start; // Toggle 0 and 1
        }
        printf("\n");
    }

    return 0;
}
