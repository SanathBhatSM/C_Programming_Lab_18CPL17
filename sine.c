// Develop a Program to compute Sin(x) using Taylor series approximation .Compare your result with the built- in Library function. Print both the results with appropriate messages.

// Taylor series expansion for sin(x) around a:
// sin(x) = sin(a) + (x - a) * cos(a) - ((x - a)^2 / 2!) * sin(a) + ((x - a)^3 / 3!) * cos(a) - ...

// Taylor series expansion for sin(x) around a=0 
// sin(x) = x - (x^3 / 3!) + (x^5 / 5!) - (x^7 / 7!) + ...


#include <stdio.h>
#include <math.h>

int main() {
    float x, result = 0.0, libraryResult;
    int n;

    // Input the value of x in radians
    printf("Enter the value of x in radians: ");
    scanf("%f", &x);

    // Input the number of terms for the Taylor series
    printf("Enter the number of terms for the Taylor series: ");
    scanf("%d", &n);

    // Calculate sin(x) using the simplified Taylor series approximation
    float term = x;
    float sign = -1.0;

    for (int i = 1; i <= n; i += 2) {
        float factorial = 1.0;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        float currentTerm = sign * (term / factorial);
        if (currentTerm < 0.000001) {
            break; // Break the loop if the term is small enough
        }
        result += currentTerm;
        term *= x * x;
        sign *= -1.0;
    }

    // Calculate sin(x) using the built-in library function
    libraryResult = sin(x);

    // Print the results
    printf("Result using simplified Taylor series approximation: %f\n", result);
    printf("Result using built-in library function: %f\n", libraryResult);

    return 0;
}
