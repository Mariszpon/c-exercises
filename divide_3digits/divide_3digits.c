#include <stdio.h>

int main() {
    // Variáveis para armazenar os caracteres digitados
    char n1_dig1, n1_dig2, n1_dig3;
    char n2_dig1, n2_dig2, n2_dig3;

    // Leitura dos três dígitos do primeiro número
    scanf(" %c", &n1_dig1);
    scanf(" %c", &n1_dig2);
    scanf(" %c", &n1_dig3);

    // Leitura dos três dígitos do segundo número
    scanf(" %c", &n2_dig1);
    scanf(" %c", &n2_dig2);
    scanf(" %c", &n2_dig3);

    // Conversão dos caracteres para inteiros
    int n1 = (n1_dig1 - '0') * 100 + (n1_dig2 - '0') * 10 + (n1_dig3 - '0');
    int n2 = (n2_dig1 - '0') * 100 + (n2_dig2 - '0') * 10 + (n2_dig3 - '0');

    // Cálculo do quociente como número real
    double resultado = (double) n1 / n2;

    // Impressão formatada: largura 8, 3 casas decimais
    printf("%8.3f\n", resultado);

    return 0;
}
