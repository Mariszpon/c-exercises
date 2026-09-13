#include <stdio.h>

int main() {

    double a1, a2;       // operandos, double ocupa mais bytes, logo, reduz erros de arredondamento
    double resultado = 0; // resultado da operação
    char op_char;         // operador, char é um único caractere

    printf("Digite o primeiro operando: ");
    scanf("%lf", &a1);

    printf("Digite o segundo operando: ");
    scanf("%lf", &a2); // %lf é usado para ler valores do tipo double (se fosse float, usa %f)

    printf("Digite um operador (+, -, *, /): ");
    scanf(" %c", &op_char); // espaço ignora enter no  %c

    if (op_char == '+')
        resultado = a1 + a2;
    else if (op_char == '-')
        resultado = a1 - a2;
    else if (op_char == '*')
        resultado = a1 * a2;
    else if (op_char == '/') {
        if (a2 != 0)
            resultado = a1 / a2;
        else {
            printf("Erro: divisão por zero!\n");
            return 1;
        }
    } else {
        printf("Operador inválido!\n");
        return 1;
    }
    
    // obs: %f em printf imprime tanto float uando double
    printf("Resultado = %.2f\n", resultado); //%f imprime um número real no formato decimal, com o .2 imprime o número com 2 casa decimais depois da vírgula
    return 0;
}
