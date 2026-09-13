#include <stdio.h>
#include "Relatorio.h"

void imprimir_relatorio(Estudante estudantes[], int quantidade) {
    printf("\n--- RELATÓRIO FINAL ---\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Matrícula: %d | Nota: %.2f | Situação: %s\n",
               estudantes[i].matricula,
               estudantes[i].nota,
               estudantes[i].aprovado ? "Aprovado" : "Reprovado");
    }
}
