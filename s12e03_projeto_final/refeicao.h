#pragma once

typedef struct{
    char nome[50];
    float valor;
} Refeicao;

void refeicao_mostrar(Refeicao ref);
void refeicao_ler(Refeicao * refeicao, FILE * input);
