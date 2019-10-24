#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "refeicao.h"
#include "bd.h"

void mostrar_refeicoes(Refeicao vet[], int size){
    for(int i = 0; i < size; i++)
        refeicao_mostrar(vet[i]);
}

void adicionar_refeicao(Refeicao vet[], int *size){
    refeicao_ler(&vet[*size], stdin);
    *size += 1;
}

bool igual(const char * v1, const char * v2){
    return strcmp(v1, v2) == 0;
}

int main(){
    puts("Digite: show, add _nome _valor, end");
    Refeicao * refeicoes = malloc(1000 * sizeof(Refeicao));
    int refeicoes_size = 0;
    carregar_refeicoes(refeicoes, &refeicoes_size);
    while(true){
        char acao[50];
        scanf("%s", acao);
        if(igual(acao, "show")){
            mostrar_refeicoes(refeicoes, refeicoes_size);
        }else if(igual(acao, "add")){
            adicionar_refeicao(refeicoes, &refeicoes_size);
        }else if(igual(acao, "end")){
            break;
        }else{
            puts("fail: comando invalido");
        }
    }
    salvar_refeicoes(refeicoes, &refeicoes_size);
    free(refeicoes);
}