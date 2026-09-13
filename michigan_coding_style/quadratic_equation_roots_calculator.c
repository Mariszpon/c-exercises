/* Programa: Cálculo das raízes de uma equação quadrática
   Autora: Mariana
   Data: 13/09/2026
   Objetivo: Ler os coeficientes a, b, c e calcular as raízes reais da equação quadrática.
*/

#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6  // tolerância para comparação de valores em ponto flutuante

int main(void) {
    // Coeficientes da equação quadrática ax^2 + bx + c = 0
    double coefficient_a, coefficient_b, coefficient_c;
    // Discriminante e raízes
    double discriminant, root1, root2;

    // Entrada de dados
    printf("Digite o coeficiente a: ");
    if (scanf("%lf", &coefficient_a) != 1) {
        printf("Entrada inválida para a.\n");
        return 1;
    }

    printf("Digite o coeficiente b: ");
    if (scanf("%lf", &coefficient_b) != 1) {
        printf("Entrada inválida para b.\n");
        return 1;
    }

    printf("Digite o coeficiente c: ");
    if (scanf("%lf", &coefficient_c) != 1) {
        printf("Entrada inválida para c.\n");
        return 1;
    }

    // Cálculo do discriminante
    discriminant = coefficient_b * coefficient_b - 4 * coefficient_a * coefficient_c;
    printf("Discriminante: %.2f\n", discriminant);

    // Verificação das raízes
    if (discriminant < 0) {
        printf("Não existem raízes reais.\n");
    } else if (fabs(discriminant) < EPSILON) {
        printf("Existe uma raiz real:\n");
        root1 = -coefficient_b / (2 * coefficient_a);
        printf("x = %.4f\n", root1);
    } else {
        printf("Existem duas raízes reais:\n");
        double sqrt_discriminant = sqrt(discriminant);
        root1 = (-coefficient_b + sqrt_discriminant) / (2 * coefficient_a);
        root2 = (-coefficient_b - sqrt_discriminant) / (2 * coefficient_a);
        printf("x1 = %.4f\n", root1);
        printf("x2 = %.4f\n", root2);
    }

    return 0;
}
