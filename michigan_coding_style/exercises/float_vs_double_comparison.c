/* Programa: Comparação entre Float e Double
   Autora: Mariana
   Data: 13/09/2026
   Objetivo: Comparar resultados de uma divisão usando float e double,
             verificando igualdade dentro de uma tolerância (epsilon).
*/

#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6  // tolerância para comparação de valores em ponto flutuante

int main(void) {
    // Operandos
    double numerador = 1234567890.123;
    double denominador = 12345.123;

    // Resultados
    float resultado_float = numerador / denominador;
    double resultado_double = numerador / denominador;

    // Comparação com tolerância
    if (fabs(resultado_float - resultado_double) < EPSILON) {
        printf("Valores aproximadamente iguais.\n");
    } else {
        printf("Valores diferentes.\n");
    }

    // Impressão com precisão controlada
    printf("Resultado (float)  = %.10f\n", resultado_float);
    printf("Resultado (double) = %.10f\n", resultado_double);

    return 0;
}
