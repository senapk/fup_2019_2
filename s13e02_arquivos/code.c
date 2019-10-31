#include <stdio.h> //FILE fopen
#include <string.h> //strcmp, strcpy
#include <stdbool.h> //true
#define MAX 50
typedef struct{
    char nome[MAX];
    int fone;
} Pessoa;

int main(){
    FILE * arq_pessoas = fopen("arq_pessoas.txt", "r");
    Pessoa vet_pessoas[MAX];
    int    vet_pessoas_size = 0;
    while(true){
        char nome[50];
        long fone;
        fscanf(arq_pessoas, "%s", nome);
        if(strcmp(nome, "#") == 0)
            break;
        fscanf(arq_pessoas, "%d", fone);
        strcpy(vet_pessoas[vet_pessoas_size].nome, nome);
        vet_pessoas[vet_pessoas_size].fone = fone;
        vet_pessoas_size++;
    }
}