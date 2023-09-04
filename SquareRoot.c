// Develop a program to find the square root of a given number N and execute for all possible inputs with appropriate messages. Note: Don’t use library function sqrt(n).
//Newto Raphson method


#include <stdio.h>

int main() {
    float N, guess, prevGuess, epsilon;

    // Input the number for which to find the square root
    printf("Enter a number to find its square root: ");
    scanf("%f", &N);

    // Initial guess for the square root (can be any positive number)
    guess = N / 2.0;

    // Set a small value (epsilon) for the acceptable error
    epsilon = 0.00001;

    // Keep improving the guess until it's accurate enough
    do {
        prevGuess = guess;
        guess = 0.5 * (prevGuess + N / prevGuess);
    } while (prevGuess - guess > epsilon || guess - prevGuess > epsilon);

    printf("Square root of %.2f is approximately %.6f\n", N, guess);

    return 0;
}
