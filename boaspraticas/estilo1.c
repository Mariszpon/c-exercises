#include <stdio.h>

// Problemas: variáveis com nomes confundíveis, nomes pouco explicativos e constantes sem significado
// O padrão recomenda MAX_TIMES ou NUM_REPETITIONS
// k e _c indicam que a variável é constante e não deve ser modificada (valor fixo, não muda durante a execução do programa)

int main()
{
    const char kLetter_c = 'H';              // letra a ser impressa
    const int kNumRepetitions_c = 10;        // número de vezes que a letra deve ser impressa

    for (int index = 1; index <= kNumRepetitions_c; index++) // <= é o operador de comparação (Menor ou igual) e index++ incremente 1 a cada repetição
        putchar(kLetter_c); // putchar imprime um caractere
    putchar('\n');

    int current_value = kNumRepetitions_c;   // valor a ser impresso
    while (current_value > 0) // while depende de condição e o foco está em continuar enuanto a condição for verdadeira
    {
        printf("%d ", current_value);
        current_value--;
    }
    putchar('\n');

    return 0;
}
