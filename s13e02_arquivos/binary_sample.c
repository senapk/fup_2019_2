#include <stdio.h> //FILE fopen
#include <string.h> //strcmp, strcpy
#include <stdbool.h> //true
#define MAX 20
typedef struct{
    char nome[MAX];
    int fone;
} Pessoa;

int main(){
    {
        Pessoa vet_pessoas[MAX] = {{"ana", 2312}, {"bia", 3234}}; 
        int vet_pessoas_size = 2;
        FILE * arq_pessoas = fopen("arq_pessoas.bin", "wb");
        fwrite(&vet_pessoas_size, sizeof(int), 1, arq_pessoas);
        fwrite(vet_pessoas, sizeof(Pessoa), MAX, arq_pessoas);
        fclose(arq_pessoas);
    }
    {
        Pessoa vet_pessoas[MAX]; 
        int vet_pessoas_size = 0;
        FILE * arq_pessoas = fopen("arq_pessoas.bin", "rb");
        fread(&vet_pessoas_size, sizeof(int), 1, arq_pessoas);
        fread(vet_pessoas, sizeof(Pessoa), vet_pessoas_size, arq_pessoas);
        for(int i = 0; i < vet_pessoas_size; i++)
            printf("%s %d\n", vet_pessoas[i].nome, vet_pessoas[i].fone);
        fclose(arq_pessoas);
    }




}