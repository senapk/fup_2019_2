#include "bd.h"
#include <stdio.h>
#include <stdlib.h>
char * arquivo = "bd.txt";
void carregar_refeicoes(Refeicao refeicoes[], int * refeicoes_size){
    FILE * arq = fopen(arquivo, "r");
    if(arq == NULL){
        printf("arquivo nao existe\n");
        return;
    }
    int size = 0;
    fscanf(arq, "%d", &size);
    *refeicoes_size = size;
    for(int i = 0; i < size; i++){
        refeicao_ler(&refeicoes[i], arq);
    }
}
void salvar_refeicoes(Refeicao refeicoes[], int *refeicoes_size){
    FILE * arq = fopen(arquivo, "w");
    fprintf(arq, "%d\n", *refeicoes_size);
    for(int i = 0; i < *refeicoes_size; i++){
        fprintf(arq, "%s ", refeicoes[i].nome);
        fprintf(arq, "%.2f\n", refeicoes[i].valor);
    }
}