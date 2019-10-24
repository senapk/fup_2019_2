#include <stdio.h>
#include <stdlib.h>

//vamos fazer o perdimento de memoria
void faz_uma_coisa_coisada(){
    int * vet = calloc(3, sizeof(int));
    printf("lihchu [ ");
    for(int i = 0; i < 3; i++)
        printf("%d ", vet[i]);
    puts("]");
    free(vet);
}

int main(){
    int qtd = 10;
    while(qtd--)
        faz_uma_coisa_coisada();

    int * x = malloc(sizeof(int)); //retorna 400
    x = malloc(sizeof(int));//retorna 500
    free(x);//500
}