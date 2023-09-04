// Develop a program to compute the roots of a quadratic equation by accepting the coefficients. Print appropriate messages.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, realPart, imaginaryPart;
    float root1, root2;

    // Input coefficients
    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the discriminant to determine the type of roots
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two real and distinct roots: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        // One real root (repeated)
        root1 = -b / (2 * a);
        printf("One real root (repeated): %.2f\n", root1);
    } else {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
