// Write functions to implement string operations such as compare, concatenate, string length.Convince the parameter passing techniques.

#include <stdio.h>
#include <string.h>

// Function to compare two strings
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0') {
            return 0; // Strings are equal
        }
        i++;
    }
    return str1[i] - str2[i]; // Return the ASCII difference
}

// Function to concatenate two strings
void stringConcatenate(char destination[], char source[]) {
    int destLength = strlen(destination);
    int i = 0;
    while (source[i] != '\0') {
        destination[destLength + i] = source[i];
        i++;
    }
    destination[destLength + i] = '\0'; // Ensure the concatenated string is null-terminated
}

// Function to calculate the length of a string
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char result[50]; // Destination for concatenation

    // Compare strings
    int compareResult = stringCompare(str1, str2);
    if (compareResult == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // Concatenate strings
    strcpy(result, str1); // Copy the first string to result
    stringConcatenate(result, str2);
    printf("Concatenated string: %s\n", result);

    // Calculate string length
    int length = stringLength(str1);
    printf("Length of '%s' is %d characters.\n", str1, length);

    return 0;
}
