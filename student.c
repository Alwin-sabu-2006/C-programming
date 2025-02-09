#include <stdio.h>

int main() {
    int roll_no, standard;
    char name[50], division;

    printf("Enter the roll number of the student: ");
    scanf("%d", &roll_no);

    printf("Enter the standard of the student in which he/she is studying: ");
    scanf("%d", &standard);

    printf("Enter the name of the student: ");
    scanf(" %s", name);  // Read a string (single word)

    printf("Enter the division: ");
    scanf(" %c", &division);  // Space before %c to consume newline

    printf("%s of standard %d and division %c has roll number %d.\n", name, standard, division, roll_no);

    return 0;
}

