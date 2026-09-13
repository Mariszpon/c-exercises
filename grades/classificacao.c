#include "Classificacao.h"

void classificar(Estudante *estudante) {
    estudante->aprovado = (estudante->nota >= 7.0);
}
