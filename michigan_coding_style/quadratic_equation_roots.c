/*
Programa: Cálculo das raízes de uma equação de segundo grau
Objetivo: Ler os coeficientes a, b, c e calcular as raízes da equação quadrática
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    // Declaração das variáveis do tipo float ue serão usadas
    float coef_a, coef_b, coef_c;
    float discriminante, raiz1, raiz2;

    // Entrada de dados
    puts("Digite o valor de a: ");
    scanf("%f", &coef_a);

    puts("Digite o valor de b: ");
    scanf("%f", &coef_b);

    puts("Digite o valor de c: ");
    scanf("%f", &coef_c);

    // Cálculo do discriminante
    // pow(base, expoente) retorna base^expoente como double
    discriminante = pow(coef_b, 2) - 4 * coef_a * coef_c;
    printf("Discriminante: %.2f\n", discriminante);

    // Verificação das raízes
    if (discriminante < 0) {
        puts("Não existem raízes reais!");
    } else if (fabs(discriminante) < 1e-6) { // tolerância para evitar erro de precisão
        puts("Existe uma raiz real:");
        raiz1 = -coef_b / (2 * coef_a); // guarda o valor da primeira solução da equação
        printf("x = %.4f\n", raiz1);
    } else {
        puts("Existem duas raízes reais:");
        float raiz_discriminante = sqrt(discriminante); // sqrt calcula a raiz de discriminante
        raiz1 = (-coef_b + raiz_discriminante) / (2 * coef_a);
        raiz2 = (-coef_b - raiz_discriminante) / (2 * coef_a);
        printf("x1 = %.4f\n", raiz1);
        printf("x2 = %.4f\n", raiz2);
    }

    return 0;
}
