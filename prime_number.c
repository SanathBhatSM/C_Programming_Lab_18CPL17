// Implement using functions to check whether the given number is prime and display appropriate messages. (No built-in math function)

#include <stdio.h>

int main() {
    int num;
    int isPrime = 1;  // Assume the number is prime initially

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  // 0 and 1 are not prime
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // Divisible by a number other than 1 and itself
                break;
            }
        }
    }

    // Check if the number is prime and display an appropriate message
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
