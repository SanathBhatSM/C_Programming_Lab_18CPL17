// Develop a program to find the reverse of a positive integer and check for palindrome or not. Display appropriate messages.


#include <stdio.h>

int main() {
    int num, original, reverse = 0, remainder;

    // Input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Store the original number for later comparison
    original = num;

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (original == reverse) {
        printf("The number %d is a palindrome.\n", original);
    } else {
        printf("The number %d is not a palindrome.\n", original);
    }

    return 0;
}
