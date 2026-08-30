#include <iostream>

// Objetivo: Fazer uma pesquisa para realizar um cardápio
// Em cada turma, para cada fruta, foi informado o número de alunos que gostam daquela fruta
// Com base em quantos alunos gostam de cada fruta em cada turma, determine:
// o menor número possível de alunos que a escola pode ter, sabendo que:
// • cada turma tem pelo menos um aluno;
// • cada aluno pertence a uma única turma;
// • cada aluno gosta de pelo menos uma fruta;
// • um mesmo aluno pode gostar de várias frutas

// Sempre começa com main
// int é o valor que vai retornar, não tá dentro dos () pq não é parâmetro (A função principal vai devolver número inteiro qnd terminar)
// () vazio pq não precisa de parâmetros (como int argc, char *argv[])
int main() {

    // Instruções
    printf("\nPrimeiro, digite a quantidade de frutas (N = linhas) e a quantidade de turmas (M = colunas).\n");
    printf("Em seguida, digite a matriz NxM com as preferencias.\n\n");

    // M = turmas
    // N = tipos de frutas
    // i e j são índices
    // (1 ≤ N, M ≤ 1000)
    int N, M;

    // scanf serva pra ler dados digitados pelo usuário e guardá-los dentro de variáveis
    // %d é pra ler/exibir números inteiros decimais com sinal
    // & antes de variável, o programa retorna o endereço de memória dela (Não o valor guardado)
    // Ou seja, o & diz ao scanf pra pegar o primeiro número digitado e guardar no endereço da memória onde a variável N está
    // a variável "lidos" serve pra se colocarem mais ou menos que apenas N ou M no início
    int lidos = scanf("%d %d", &N, &M);

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
    //
    // Tem esse menos 1 pq se a pessoa colocar 5, iria contar 0 1 2 3 4 5 (6) na matriz (É o índice)
    // ex: se M = 5, os índices válidos são 0 1 2 3 4
    // o FOR garante que pare antes de chegar em j = 5
    // Fica ent j < M pra não contar o último/dizer que o último válido é M-1 (Que no ex seria 5)
    //
    // i e j = 0 pq as matrizes começam a partir do 0
    // i++ e j++ é para aumentar o valor em 1
    // O 1º for percorre as linhas e o 2º as colunas
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            // scanf lê os números (que agoram são inteiros pelo %d)
            // &G[i][j] é o endereço de memória da posição i, j da matriz
            // o & pega o endereço onde esse valor deve ser guardado, e aí o número vai pra célula G[i][j]
            scanf("%d", &G[i][j]);
        }
    }

    // total é a variável que guarda o resultado final (menor número de alunos)
    // O tipo dela é long long (Tipo int, mas com capacidade maior)
    // Um long long aguenta 9x10^18
    // Usa long long pq o valores de entrada podem ultrapassar o limite de um int
    // Também dá pra usar long mas pode dar overflow se a soma for muito grande
    long long total = 0;

    // Para cada turma, calcular o máximo de alunos que gostam de alguma fruta
    // 1º for percorre cada turma (j é o índice da turma atual e M o número de turmas)
    // Significa: Comece da turma 0 e vá até a turma M-1 (Índice), percorre tds as turmas
    for (int j = 0; j < M; j++) {
        // max_alunos é a variável pra guardar o máximo de alunos que gostam de alguma fruta naquela turma
        int max_alunos = 0;
        // 2º for percorre cada fruta daquela turma (i = índice fruta e N = total frutas)
        for (int i = 0; i < N; i++) {
            // G[i][j] = número de alunos da fruta i na turma j (índice)
            // max_alunos guarda o maior valor encontrado até agr nql turma
            // Se o número de alunos dessa fruta é maior do que o maior que eu já vi até agora, então:
            // Atualiza o max_alunos, caso contrário, mantém valor atual
            if (G[i][j] > max_alunos) {
                max_alunos = G[i][j];
            }
        }
        // Acumulando o resultado
        // max_alunos guarda o maior número de alunos que gostam de alguma fruta em uma turma específica.
        // total guarda a soma de todos esses valores, ou seja, o mínimo possível de alunos na escola inteira
        // total = total + max_alunos;
        // cada vez que o 1º FOR (do código de cima) termina de analisar uma turma, esse valor é somado ao total geral.
        total += max_alunos;
    }

    // imprime a função
    // "%lld" = especificador de formato para long long
    // \n quebra linha
    // total = valor calculado (menor número de alunos na escola)
    printf("Resultado: %lld\n", total);

    // programa terminou
    // retorna um valor pro main
    // 0 = terminou sem erros
    return 0;


    // Alunos: Mariana Pondé e Lucas Dinnies
}
