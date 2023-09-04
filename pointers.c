// Develop a program using pointers to compute the sum, mean and standard deviation of all elements stored in an array of n real numbers.

#include <stdio.h>
#include <math.h>

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float numbers[n];

    // Input the elements
    printf("Enter %d real numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
    }

    // Calculate the sum using pointers
    float sum = 0.0;
    float *ptr = numbers; // Pointer to the first element of the array

    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++; // Move the pointer to the next element
    }

    // Calculate the mean
    float mean = sum / n;

    // Calculate the standard deviation
    float deviationSum = 0.0;
    ptr = numbers; // Reset the pointer to the first element

    for (int i = 0; i < n; i++) {
        deviationSum += (*ptr - mean) * (*ptr - mean);
        ptr++; // Move the pointer to the next element
    }

    float standardDeviation = sqrt(deviationSum / n);

    // Print the results
    printf("Sum: %.2f\n", sum);
    printf("Mean: %.2f\n", mean);
    printf("Standard Deviation: %.2f\n", standardDeviation);

    return 0;
}
