#include <stdio.h>

int main() {
    int num, digit, rev = 0;
    char *words[] = {"Zero", "One", "Two", "Three", "Four", "Five",
                     "Six", "Seven", "Eight", "Nine"};

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) { 
        printf("Zero\n");
        return 0;
    }

    if (num < 0) { 
        printf("Minus ");
        num = -num;
    }
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    while (rev > 0) {
        digit = rev % 10;
        printf("%s ", words[digit]);
        rev /= 10;
    }

    printf("\n");
    return 0;
}
