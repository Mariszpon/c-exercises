#include <stdio.h>
#include <string.h>

#define MAX 100005  // maior tamanho possível, segundo o enunciado (N ≤ 10^5)

int main(void) {
    int n;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n); // aqui a gente descobre o valor real de n

    char s[MAX]; // vetor sempre do mesmo tamanho fixo, independente do que n valer

    printf("Digite a sequencia: ");
    scanf("%s", s);

    int tamanho_real = strlen(s); // analiza tudo q ta na string

    if (tamanho_real != n) {
        printf("Erro: o tamanho informado (%d) nao bate com o tamanho da string (%d)\n", n,tamanho_real);
         return 1; // retorno diferente de 0 sinaliza erro
    }

    printf("Tamanho confere! (%d caracteres)\n", n);

     long long total = 0; // acumulador da resposta final (soma dos 'a' em blocos nao-triviais)
    int i = 0;            // i marca onde o bloco atual comeca

    while (i < n) { // repete ate percorrer a string inteira

        int j = i; // j vai "andar" pra frente pra medir o tamanho do bloco atual

        // avanca j enquanto o caractere for igual ao de s[i]
        // (ou seja, enquanto ainda estivermos dentro do mesmo bloco)
        while (j < n && s[j] == s[i]) {
            j++;
        }

        // quando o while de dentro para, o bloco atual vai de i ate j-1
        int tamanho_bloco = j - i;

        // se o bloco e de 'a' E tem 2 ou mais caracteres (nao-trivial), soma ele
        if (s[i] == 'a' && tamanho_bloco >= 2) {
            total += tamanho_bloco;
        }

        i = j; // pula pro comeco do proximo bloco, pra repetir o processo
    }

    // ===== fim do algoritmo =====

    printf("Total: %lld\n", total); // %lld porque total e long long

    return 0;
}
