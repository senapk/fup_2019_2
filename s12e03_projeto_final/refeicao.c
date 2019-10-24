#include "refeicao.h"
#include <stdio.h>

void refeicao_mostrar(Refeicao ref){
    printf("nome:%s,  valor:%.2f\n", ref.nome, ref.valor);

}

void refeicao_ler(Refeicao * refeicao, FILE * input){
    fscanf(input, "%s", refeicao->nome);
    fscanf(input, "%f", &refeicao->valor);
}
