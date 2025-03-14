#include<stdio.h>

// Function declaration
int add(int, int);

int main() {
    int x, y, result;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    // Calling the add function to calculate the sum
    result = add(x, y);

    // Display the result
    printf("The sum of two numbers is %d\n", result);

    return 0;
}

// Function definition for adding two numbers
int add(int a, int b) {
    return a + b;
}

