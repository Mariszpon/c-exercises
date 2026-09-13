/* Programa: Impressão de caracteres e números
   Autora: Mariana
   Data: 13/09/2026
   Objetivo: Imprimir uma letra várias vezes e depois imprimir números em ordem decrescente.
*/

#include <stdio.h>

int main(void) {
    // Declaração de constantes
    const char letter = 'H';   // letra a ser impressa
    const int repetitions = 10; // número de vezes que a letra deve ser impressa

    // Processamento e saída: impressão da letra
    for (int i = 1; i <= repetitions; i++) {
        putchar(letter);
    }
    putchar('\n'); // quebra de linha após a sequência de letras

    // Processamento e saída: impressão dos números em ordem decrescente
    int number = repetitions; // valor inicial para contagem regressiva
    while (number > 0) {
        printf("%d ", number);
        number--;
    }
    putchar('\n'); // quebra de linha após a sequência de números

    return 0; // fim do programa
}
