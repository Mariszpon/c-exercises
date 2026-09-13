/* Programa: Entrada de informações do paciente
   Autora: Mariana
   Data: 13/09/2026
   Objetivo: Ler o nome e a idade do paciente e exibir os dados.
*/

#include <stdio.h>
#include <locale.h>

#define NAME_MAX_LENGTH 50  // tamanho máximo para o nome do paciente

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // habilita acentuação em português

    char patient_name[NAME_MAX_LENGTH]; // nome do paciente
    int patient_age = 0;                // idade do paciente

    // Entrada: nome
    printf("Digite o seu nome: ");
    if (fgets(patient_name, sizeof(patient_name), stdin) == NULL) {
        printf("Erro ao ler o nome.\n");
        return 1;
    }

    // Entrada: idade
    printf("Digite a sua idade: ");
    if (scanf("%d", &patient_age) != 1) {
        printf("Entrada inválida para idade.\n");
        return 1;
    }

    // Saída
    printf("%s, você tem %d anos.\n", patient_name, patient_age);

    return 0;
}
