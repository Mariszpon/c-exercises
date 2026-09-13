#include "Estudante.h"
#include "Leitura.h"
#include "Classificacao.h"
#include "Relatorio.h"

int main() {
    Estudante estudantes[MAX_ESTUDANTES];

    ler_dados_dos_estudantes(estudantes, MAX_ESTUDANTES);

    for (int i = 0; i < MAX_ESTUDANTES; i++) {
        classificar(&estudantes[i]);
    }

    imprimir_relatorio(estudantes, MAX_ESTUDANTES);

    return 0;
}
