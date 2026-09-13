/* Program: Quadratic equation roots calculator
   Author: Mariana
   Date: 13/09/2026
   Purpose: Read coefficients a, b, c and compute the real roots of a quadratic equation.
*/

#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6  // tolerance for floating-point comparison

int main(void) {
    // Coefficients of the quadratic equation ax^2 + bx + c = 0
    double coefficient_a, coefficient_b, coefficient_c;
    // Discriminant and roots
    double discriminant, root1, root2;

    // Input
    printf("Enter coefficient a: ");
    if (scanf("%lf", &coefficient_a) != 1) {
        printf("Invalid input for a.\n");
        return 1;
    }

    printf("Enter coefficient b: ");
    if (scanf("%lf", &coefficient_b) != 1) {
        printf("Invalid input for b.\n");
        return 1;
    }

    printf("Enter coefficient c: ");
    if (scanf("%lf", &coefficient_c) != 1) {
        printf("Invalid input for c.\n");
        return 1;
    }

    // Calculate discriminant
    discriminant = coefficient_b * coefficient_b - 4 * coefficient_a * coefficient_c;
    printf("Discriminant: %.2f\n", discriminant);

    // Check roots based on discriminant
    if (discriminant < 0) {
        printf("No real roots exist.\n");
    } else if (fabs(discriminant) < EPSILON) {
        printf("There is one real root:\n");
        root1 = -coefficient_b / (2 * coefficient_a);
        printf("x = %.4f\n", root1);
    } else {
        printf("There are two real roots:\n");
        double sqrt_discriminant = sqrt(discriminant);
        root1 = (-coefficient_b + sqrt_discriminant) / (2 * coefficient_a);
        root2 = (-coefficient_b - sqrt_discriminant) / (2 * coefficient_a);
        printf("x1 = %.4f\n", root1);
        printf("x2 = %.4f\n", root2);
    }

    return 0;
}
