#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("%d is the largest among them", num1);
        }
    } 
    else if (num2 >= num1) {
        if (num2 >= num3) {
            printf("%d is the largest", num2);
        }
    } 
    else {
        printf("%d is the largest", num3);
    }

    return 0;
}

