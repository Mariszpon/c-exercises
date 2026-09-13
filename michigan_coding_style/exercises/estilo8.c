#include <stdio.h>

/* Calcula o salário líquido a partir do salário bruto e do total de
 * descontos recebidos como parâmetros. Retorna o valor líquido. */
static double calcular_salario_liquido(double salario_bruto, double total_descontos)
{
    return salario_bruto - total_descontos;
}

int main(void)
{
    double salario_bruto;
    double total_descontos;
    double salario_liquido;

    puts("Digite o salário bruto:");
    if (scanf("%lf", &salario_bruto) != 1)
    {
        puts("Entrada inválida.");
        return 1;
    }

    puts("Digite o total de descontos:");
    if (scanf("%lf", &total_descontos) != 1)
    {
        puts("Entrada inválida.");
        return 1;
    }

    salario_liquido = calcular_salario_liquido(salario_bruto, total_descontos);
    printf("O salário líquido é %.2f\n", salario_liquido);

    return 0;
}
