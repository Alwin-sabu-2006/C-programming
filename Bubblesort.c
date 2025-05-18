#include <stdio.h>

int main()
{
    int A[100], i, n, pass, temp;

    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // Bubble sort
    for (pass = 0; pass < n - 1; pass++)
    {
        printf("passno %d\n", pass + 1);
        for (i = 0; i < n - pass - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("In ascending order: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
