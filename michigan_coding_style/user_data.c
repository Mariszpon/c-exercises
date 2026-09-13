#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // habilita a acentuação para o português

    char nome[50]; // nome do paciente com mais espaço
    puts("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin); // lê até 49 caracteres + o \0 final, incluindo espaços
    // "Leia até X caracteres da entrada padrão (teclado) e guarde em nome"
    // fgets também guarda dados digitados como o scanf, mas ele é específico para textos
    // Ele aceita espaços, diferente do scanf, então nomes compostos são guardados completos
    // sizeof lê até o tamanho máximo que esse array suporta
    // stdin (standard input) é a entrada padrão do programa (teclado)

    int idade = 0; // idade do paciente
    puts("Digite a sua idade: ");
    scanf("%d", &idade);
    
    printf("%s, você tem %d anos.\n", nome, idade);
    return 0;
}
