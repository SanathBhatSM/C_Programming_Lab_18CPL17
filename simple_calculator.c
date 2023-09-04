// Develop a program to solve simple computational problems using arithmetic expressions and use of each operator leading to simulation of a commercial calculator. (No built-in math function)

#include <stdio.h>

void main() {
    char operator;
    int num1, num2, result;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
            } else {
                printf("Error: Modulus by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    printf("Result: %d\n", result);
}

