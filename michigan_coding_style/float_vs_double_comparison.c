/* Program: Float vs Double comparison
   Author: Mariana
   Date: 13/09/2026
   Purpose: Compare results of division using float and double, 
            and check equality within a tolerance (epsilon).
*/

#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6  // tolerance for floating-point comparison

int main(void) {
    // Operands
    double numerator = 1234567890.123;
    double denominator = 12345.123;

    // Results
    float result_float = numerator / denominator;
    double result_double = numerator / denominator;

    // Comparison with tolerance
    if (fabs(result_float - result_double) < EPSILON) {
        printf("Values are approximately equal.\n");
    } else {
        printf("Values are different.\n");
    }

    // Output with controlled precision
    printf("Result (float)  = %.10f\n", result_float);
    printf("Result (double) = %.10f\n", result_double);

    return 0;
}
