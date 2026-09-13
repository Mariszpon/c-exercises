/* Program: Simple calculator
   Author: Mariana
   Date: 13/09/2026
   Purpose: Read two operands and an operator, then compute the result.
*/

#include <stdio.h>

int main(void) {
    double operand1, operand2;   // Operands for the calculation
    double result = 0.0;         // Result of the operation
    char operator;               // Operator (+, -, *, /)

    // Input
    printf("Enter the first operand: ");
    if (scanf("%lf", &operand1) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Enter the second operand: ");
    if (scanf("%lf", &operand2) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Enter an operator (+, -, *, /): ");
    if (scanf(" %c", &operator) != 1) {
        printf("Invalid operator input!\n");
        return 1;
    }

    // Processing
    if (operator == '+') {
        result = operand1 + operand2;
    } else if (operator == '-') {
        result = operand1 - operand2;
    } else if (operator == '*') {
        result = operand1 * operand2;
    } else if (operator == '/') {
        if (operand2 != 0.0) {
            result = operand1 / operand2;
        } else {
            printf("Error: division by zero!\n");
            return 1;
        }
    } else {
        printf("Error: invalid operator!\n");
        return 1;
    }

    // Output
    printf("Result = %.2f\n", result);
    return 0;
}
