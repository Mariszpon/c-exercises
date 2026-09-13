#include <stdio.h>

#define NUM_LETRAS 10        /* quantidade de letras lidas uma a uma */
#define MAX_SEQUENCIA 9      /* máximo de letras aceitas na sequência */
#define TAM_BUFFER_SEQUENCIA (MAX_SEQUENCIA + 1) /* +1 para o terminador '\0' */


#define ESTATIZAR(x) #x
#define XESTATIZAR(x) ESTATIZAR(x)


static void ler_letras(char letras[], int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        printf("letra %d: ", i + 1);
        letras[i] = (char) getchar();
        getchar(); // descarta o ENTER
    }
}

/* Imprime, um a um, os caracteres armazenados em letras[]. */
static void imprimir_letras(const char letras[], int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        putchar(letras[i]);
    }
    putchar('\n');
}

int main(void)
{
    char letras[NUM_LETRAS];

    puts("Digite 10 letras:");
    ler_letras(letras, NUM_LETRAS);

    puts("As 10 letras digitadas foram:");
    imprimir_letras(letras, NUM_LETRAS);

    char sequencia[TAM_BUFFER_SEQUENCIA];

    printf("Digite uma sequência de, no máximo, %d letras:\n", MAX_SEQUENCIA);

    // "%9s" trava o scanf em MAX_SEQUENCIA caracteres, garantindo que
    // sempre sobre espaço pro '\0' dentro de sequencia[]
    if (scanf("%" XESTATIZAR(MAX_SEQUENCIA) "s", sequencia) == 1)
    {
        printf("Sequência digitada: %s\n", sequencia);
    }
    else
    {
        puts("Entrada inválida.");
    }

    return 0;
}
