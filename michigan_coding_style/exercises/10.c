/* Programa para criptografar e descriptografar
o primeiro nome e o sobrenome de uma pessoa, sendo que
ambos podem ser nomes compostos */

#include <stdio.h>

#define MAX_LETRAS 9
#define TAMANHO_BUFFER (MAX_LETRAS + 1)
#define PRIMEIRO_NOME_SHIFT 1
#define SOBRENOME_SHIFT 2

/* Lê um nome digitado pelo usuário, um caractere por vez, até
 * encontrar '\n' (ou EOF) ou atingir max_letras caracteres. Se o
 * usuário digitar mais que o limite, o restante da linha é
 * descartado. O nome lido é gravado em destino[], já terminado com
 * '\0'. */
static void ler_nome(char destino[], int max_letras)
{
    int i = 0;
    int c = getchar();

    while (i < max_letras && c != '\n' && c != EOF)
    {
        destino[i] = (char) c;
        i++;
        c = getchar();
    }
    destino[i] = '\0';

    // descarta o restante da linha, se sobrou algo
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}

/* Aplica uma cifra de César em origem[], somando "shift" ao código de
 * cada caractere, e grava o resultado (já terminado com '\0') em
 * destino[]. Chamar com shift negativo desfaz a cifra, ou seja,
 * descriptografa. */
static void cifra_cesar(const char origem[], char destino[], int shift)
{
    int i = 0;

    while (origem[i] != '\0')
    {
        destino[i] = (char) (origem[i] + shift);
        i++;
    }
    destino[i] = '\0';
}

int main(void)
{
    char primeiro_nome[TAMANHO_BUFFER];
    char sobrenome[TAMANHO_BUFFER];
    char primeiro_nome_criptografado[TAMANHO_BUFFER];
    char sobrenome_criptografado[TAMANHO_BUFFER];
    char primeiro_nome_descriptografado[TAMANHO_BUFFER];
    char sobrenome_descriptografado[TAMANHO_BUFFER];

    // LEITURA DO PRIMEIRO NOME E DO SOBRENOME:
    printf("Digite o primeiro nome e tecle ENTER: ");
    ler_nome(primeiro_nome, MAX_LETRAS);
    printf("Primeiro nome armazenado: %s\n", primeiro_nome);

    printf("Digite o sobrenome e tecle ENTER: ");
    ler_nome(sobrenome, MAX_LETRAS);
    printf("Sobrenome armazenado: %s\n", sobrenome);

    // CRIPTOGRAFIA:
    cifra_cesar(primeiro_nome, primeiro_nome_criptografado, PRIMEIRO_NOME_SHIFT);
    cifra_cesar(sobrenome, sobrenome_criptografado, SOBRENOME_SHIFT);
    printf("Primeiro nome criptografado: %s\n", primeiro_nome_criptografado);
    printf("Sobrenome criptografado: %s\n", sobrenome_criptografado);

    // DESCRIPTOGRAFIA (mesma função, shift invertido):
    cifra_cesar(primeiro_nome_criptografado, primeiro_nome_descriptografado, -PRIMEIRO_NOME_SHIFT);
    cifra_cesar(sobrenome_criptografado, sobrenome_descriptografado, -SOBRENOME_SHIFT);
    printf("Primeiro nome descriptografado: %s\n", primeiro_nome_descriptografado);
    printf("Sobrenome descriptografado: %s\n", sobrenome_descriptografado);

    return 0;
}
