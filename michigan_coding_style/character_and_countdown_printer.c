/* Programa: Impressão de caractere e contagem regressiva
   Autora: Mariana
   Data: 13/09/2026
   Objetivo: Imprimir um caractere várias vezes e depois mostrar uma contagem regressiva.
*/

#include <stdio.h>

#define CARACTERE_IMPRESSO 'H'   // caractere que será impresso
#define NUM_REPETICOES 10        // número de vezes que o caractere será impresso

int main(void) {
    // Imprime o caractere NUM_REPETICOES vezes
    for (int indice = 0; indice < NUM_REPETICOES; indice++) {
        putchar(CARACTERE_IMPRESSO);
    }
    putchar('\n');

    // Imprime uma contagem regressiva de NUM_REPETICOES até 1
    int valor_atual = NUM_REPETICOES;
    while (valor_atual > 0) {
        printf("%d ", valor_atual);
        valor_atual--;
    }
    putchar('\n');

    return 0;
}


