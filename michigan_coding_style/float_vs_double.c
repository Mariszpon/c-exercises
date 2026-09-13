#include <stdio.h>
#include <math.h> //inclui o uso de fabs

int main(void) {

    double numerador = 1234567890.123;
    double denominador = 12345.123;

    float resultado_float = numerador / denominador;
    double resultado_double = numerador / denominador;

    // Comparação com tolerância (epsilon)
    double epsilon = 1e-6; // Criei uma variável chamada epsilon do tipo double e atribuindo o valor 1.10^-6 (0.000001)
    // fabs serve pra calcular valor absoluto
    if (fabs(resultado_float - resultado_double) < epsilon) {
        puts("Quase iguais"); // Usa quase iguais pq por causa dos arredondamentos eles quase nunca vão ser exatamente iguais
    } else {
        puts("Diferentes");
    }

    // Impressão com precisão controlada
    printf("Resultado float : %.10f\n", resultado_float);
    printf("Resultado double: %.10f\n", resultado_double);

    return 0;
}
