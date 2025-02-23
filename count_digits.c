#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) count = 1; // Special case for 0

    while (num != 0) {
        num = num / 10; // Remove the last digit
        count++;        // Increase count
    }

    printf("Number of digits: %d\n", count);
    return 0;
}


