#include <iostream>

// Objetivo: Fazer uma pesquisa para realizar um cardápio
// Em cada turma, para cada fruta, foi informado o número de alunos que gostam daquela fruta
// Com base em quantos alunos gostam de cada fruta em cada turma, determine:
// o menor número possível de alunos que a escola pode ter, sabendo que:
// • cada turma tem pelo menos um aluno;
// • cada aluno pertence a uma única turma;
// • cada aluno gosta de pelo menos uma fruta;
// • um mesmo aluno pode gostar de várias frutas

int main() {
    // M = turmas
    // N = tipos de frutas
    // (1 ≤ N, M ≤ 1000)
    int N, M;

    // scanf serva pra ler dados digitados pelo usuário e guardá-los dentro de variáveis
    // %d é pra ler/exibir números inteiros decimais com sinal
    // & antes de variável, o programa retorna o endereço de memória dela (Não o valor guardado)
    // Ou seja, o & diz ao scanf pra pegar o primeiro número digitado e guardar no endereço da memória onde a variável N está
    scanf("%d %d", &N, &M);

    // G é uma matriz
    // N = linhas
    // M = colunas
    int G[N][M];

    // Leitura da matriz de preferências
    // i = qual fruta estamos olhando
    // j = qual turma estamos olhando
    //
    // i percorre as frutas (de 0 até N-1).
    // j percorre as turmas (de 0 até M-1).
    // Tem esse menos 1 pq se a pessoa colocar 5, iria contar 0 1 2 3 4 5 (6) na matriz
    // Fica ent j < M pra não contar o último (Que no ex seria 5)
    // i e j = 0 pq as matrizes começam a partir do 0
    // i++ e j++ é para aumentar o valor em 1
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            // scanf lê os números (que agoram são inteiros pelo %d)
            // &G[i][j] é o endereço de memória da posição i, j da matriz
            // o & pega o endereço onde esse valor deve ser guardado, e aí o número vai pra célula G[i][j]
            scanf("%d", &G[i][j]);
        }
    }

    long long total = 0;

    // Para cada turma, calcular o máximo de alunos que gostam de alguma fruta
    for (int j = 0; j < M; j++) {
        int max_alunos = 0;
        for (int i = 0; i < N; i++) {
            if (G[i][j] > max_alunos) {
                max_alunos = G[i][j];
            }
        }
        total += max_alunos;
    }

    printf("%lld\n", total);

    return 0;

}
