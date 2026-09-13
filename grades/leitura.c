#include <stdio.h>
#include "Leitura.h"

void ler_dados_dos_estudantes(Estudante estudantes[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Digite a matrícula do estudante %d: ", i+1);
        scanf("%d", &estudantes[i].matricula);

        printf("Digite a nota do estudante %d: ", i+1);
        scanf("%f", &estudantes[i].nota);

        estudantes[i].aprovado = false; // definido depois
    }
}

