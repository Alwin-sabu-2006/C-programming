#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c, d, root1, root2;
    
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c; // Calculate discriminant

    if (d > 0) {  
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots: %.2f and %.2f \n", root1, root2);
    } 
    else if (d == 0) {  
        root1 = -b / (2 * a);
        printf("Root: %.2f\n", root1);
    } 
    else {  
        printf("Roots are complex.\n");
    }

return 0;
}
