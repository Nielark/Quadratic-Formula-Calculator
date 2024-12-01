#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, d, x1, x2, realPart, imaginaryPart;

    printf("Quadratic Equation: ax^2 + bx + c = 0, where a, b and c are real numbers and a != 0\n\n");

    // Enter the coefficient
    printf("Enter coefficient a (x^2): ");
    scanf("%lf", &a);

    // Check if the coefficient "a" is valid
    if(a == 0){
        printf("Invalid Input: Coefficient 'a' cannot be zero for a quadratic equation.\n");
        return 0;
    }

    printf("Enter coefficient b (x): ");
    scanf("%lf", &b);

    printf("Enter coefficient c (constant): ");
    scanf("%lf", &c);

    printf("\nDiscriminant: d = b^2 - 4ac\n");
    d = (pow(b, 2)) - (4 * a * c);                // Calculate for the discriminant
    printf("Discriminant Value: %.2lf\n", d);     // Display the discriminant value

    printf("\n");
    // Determine the nature of roots based on discriminant value
    if(d > 0){
        // The roots are real distinct (can be rational or irrational)
        // Formula for x1: x1 = -b+√d/2a
        // Formula for x2: x2 = -b-√d/2a
        x1 = (-b + sqrt(d)) / (2 * a);  // Solve for the first root
        x2 = (-b - sqrt(d)) / (2 * a);  // Solve for the second root

        printf("Roots: x1 = %.2lf and x2 = %.2lf\n", x1, x2); // Display the root values
    }
    else if(d == 0){
        // The roots are real and equal
        // Formula for x1 and x2: x1/x2 = -b/2a
        x1 = -b / (2 * a);  // Solve for the root

        printf("Roots: x1 and x2 = %.2lf\n", x1); // Display the root value
    }
    else{
        // The roots are complex and different or imaginary roots
        // Formula for x1 : x1 = -b+√-di/2a
        // Formula for x1 : x1 = -b-√-di/2a
        realPart = -b / (2 * a);            // Solve for the real part
        imaginaryPart = sqrt(-d) / (2 * a); // Solve for the imaginary part

        // Display the roots values
        printf("Roots: x1 = %.2lf + %.2lfi and x2 = %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
