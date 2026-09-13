/* Programa: Calculadora simples
   Autora: Mariana
   Data: 13/09/2026
   Objetivo: Ler dois operandos e um operador, depois calcular o resultado.
*/

#include <stdio.h>

int main(void) {
    double operand1, operand2;   // operandos para o cálculo
    double result = 0.0;         // resultado da operação
    char operator;               // operador (+, -, *, /)

    // Entrada
    printf("Digite o primeiro operando: ");
    if (scanf("%lf", &operand1) != 1) {
        printf("Entrada inválida!\n");
        return 1;
    }

    printf("Digite o segundo operando: ");
    if (scanf("%lf", &operand2) != 1) {
        printf("Entrada inválida!\n");
        return 1;
    }

    printf("Digite um operador (+, -, *, /): ");
    if (scanf(" %c", &operator) != 1) {
        printf("Entrada inválida para operador!\n");
        return 1;
    }

    // Processamento
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
            printf("Erro: divisão por zero!\n");
            return 1;
        }
    } else {
        printf("Erro: operador inválido!\n");
        return 1;
    }

    // Saída
    printf("Resultado = %.2f\n", result);
    return 0;
}
