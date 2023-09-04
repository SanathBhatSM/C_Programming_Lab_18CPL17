// Implement Recursive functions for Binary to Decimal Conversion.

#include <stdio.h>
#include <math.h>

// Recursive function to convert binary to decimal
int binaryToDecimal(int binary, int position) {
    if (binary == 0) {
        return 0; // Base case: When the binary number becomes 0, return 0.
    } else {
        int digit = binary % 10; // Get the last digit of the binary number
        int decimal = digit * pow(2, position);
        return decimal + binaryToDecimal(binary / 10, position + 1);
    }
}

int main() {
    int binaryNumber;

    // Input the binary number
    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);

    int decimalEquivalent = binaryToDecimal(binaryNumber, 0);

    // Print the decimal equivalent
    printf("Decimal equivalent: %d\n", decimalEquivalent);

    return 0;
}
