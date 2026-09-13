#include <iostream>

int main() {

    // Instruções
    printf("\nPrimeiro, digite a quantidade de frutas (N = linhas) e a quantidade de turmas (M = colunas).\n");
    printf("Em seguida, digite a matriz NxM com as preferencias.\n\n");

    // M = turmas
    // N = tipos de frutas
    int N, M;

    int lidos = scanf("%d %d", &N, &M);

    int G[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &G[i][j]);
        }
    }

    long long total = 0;

    for (int j = 0; j < M; j++) {
        int max_alunos = 0;
        for (int i = 0; i < N; i++) {
            if (G[i][j] > max_alunos) {
                max_alunos = G[i][j];
            }
        }
        total += max_alunos;
    }

    printf("Resultado: %lld\n", total);

    return 0;


    // Alunos: Mariana Pondé e Lucas Dinnies
}
