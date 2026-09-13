#include <stdio.h>

static const char* const prompt_c = "Digite o valor da conta %d: ";

/* Lê "quantidade" valores de conta digitados pelo usuário e acumula a
 * soma em *total_out. Retorna 0 em caso de sucesso, ou um valor
 * diferente de zero se alguma leitura falhar. */
static int somar_contas(int quantidade, double *total_out)
{
    double total = 0.0;

    for (int i = 0; i < quantidade; i++)
    {
        printf(prompt_c, i + 1);

        double valor;
        if (scanf("%lf", &valor) != 1)
        {
            return 1; // erro de leitura
        }

        total += valor;
    }

    *total_out = total;
    return 0;
}

int main(void)
{
    int numero_de_contas;

    printf("Digite o número de contas: ");
    if (scanf("%d", &numero_de_contas) != 1 || numero_de_contas <= 0)
    {
        puts("Número de contas inválido.");
        return 1;
    }

    double total;
    if (somar_contas(numero_de_contas, &total) != 0)
    {
        puts("Entrada inválida.");
        return 1;
    }

    double valor_medio = total / numero_de_contas;

    printf("Valor total = %.2f\n", total);
    printf("Valor médio = %.2f\n", valor_medio);

    return 0;
}
