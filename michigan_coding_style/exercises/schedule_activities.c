#include <stdio.h>

// MESES DO ANO
typedef enum {
    JANEIRO, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO,
    JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
} Mes_e;

// DIAS DA SEMANA
typedef enum {
    SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO, DOMINGO
} Dia_semana_e;

static const char* const meses[] = {
    "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
    "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
};

static const char* const dias_da_semana[] = {
    "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira",
    "Sexta-feira", "Sábado", "Domingo"
};

/* Mostra os meses do ano numerados e lê a escolha do usuário,
 * validando que a leitura funcionou e que o valor está no intervalo
 * válido do enum Mes_e. Retorna o mês escolhido. */
static Mes_e selecionar_mes(void)
{
    puts("Meses do ano: ");

    for (Mes_e m = JANEIRO; m <= DEZEMBRO; m++)
    {
        printf("\t(%2d) %s\n", m, meses[m]);
    }

    int escolha;
    int leitura_ok;

    puts("Selecione um mês pelo seu número: ");
    leitura_ok = scanf("%d", &escolha);

    while (leitura_ok != 1 || escolha < JANEIRO || escolha > DEZEMBRO)
    {
        // limpa o resto da linha de entrada antes de tentar de novo
        while (getchar() != '\n')
            ;

        puts("Valor inválido. Selecione um número entre 0 e 11: ");
        leitura_ok = scanf("%d", &escolha);
    }

    return (Mes_e) escolha;
}

/* Mostra os dias da semana numerados e lê a escolha do usuário,
 * validando que a leitura funcionou e que o valor está no intervalo
 * válido do enum Dia_semana_e. Retorna o dia escolhido. */
static Dia_semana_e selecionar_dia(void)
{
    puts("Dias da semana: ");

    for (Dia_semana_e d = SEGUNDA; d <= DOMINGO; d++)
    {
        printf("\t(%2d) %s\n", d, dias_da_semana[d]);
    }

    int escolha;
    int leitura_ok;

    puts("Selecione um dia pelo seu número: ");
    leitura_ok = scanf("%d", &escolha);

    while (leitura_ok != 1 || escolha < SEGUNDA || escolha > DOMINGO)
    {
        while (getchar() != '\n')
            ;

        puts("Valor inválido. Selecione um número entre 0 e 6: ");
        leitura_ok = scanf("%d", &escolha);
    }

    return (Dia_semana_e) escolha;
}

/* Decide e imprime se a pessoa deve descansar ou trabalhar,
 * dado o mês e o dia da semana escolhidos. */
static void decidir_atividade(Mes_e mes, Dia_semana_e dia)
{
    if (mes == JANEIRO || dia == DOMINGO)
    {
        puts("Descansar!");
    }
    else
    {
        puts("Trabalhar!");
    }
}

int main(void)
{
    Mes_e mes_selecionado = selecionar_mes();
    printf("Mês selecionado: %s\n", meses[mes_selecionado]);

    putchar('\n');

    Dia_semana_e dia_selecionado = selecionar_dia();
    printf("Dia selecionado: %s\n", dias_da_semana[dia_selecionado]);

    putchar('\n');
    decidir_atividade(mes_selecionado, dia_selecionado);

    return 0;
}
