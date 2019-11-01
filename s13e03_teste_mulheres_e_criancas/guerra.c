#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    char nome[3];
    int idade; 
    char sexo;
} Pessoa;

Pessoa pessoa_gerar(){
    Pessoa pessoa;
    char * alfabeto = "abcdefghijklmnopqrstuvwxyz";
    char nome[] = {alfabeto[rand() % 26], alfabeto[rand() % 26], '\0'};
    strcpy(pessoa.nome, nome);
    pessoa.idade = rand() % 101;
    char * opcoes = "mf";
    pessoa.sexo = opcoes[rand() % 2];
    return pessoa;
}

int main(){
    srand(time(NULL));
    int MAX = 10;
    Pessoa vet[MAX];
    Pessoa homens_maduros[MAX];
    int size = 0;
    for(int i = 0; i < MAX; i++)
        vet[i] = pessoa_gerar();
    
    for(int i = 0; i < MAX; i++){
        if(vet[i].sexo == 'm' && vet[i].idade >= 18){
            homens_maduros[size] = vet[i];
            size += 1;
        }
    }
    puts("todos");
    for(int i = 0; i < MAX; i++){
        printf("[%s %d %c]", vet[i].nome, vet[i].idade, vet[i].sexo);
    }
    puts("\nguerreiros");
    for(int i = 0; i < size; i++){
        printf("[%s %d %c]", homens_maduros[i].nome, homens_maduros[i].idade, homens_maduros[i].sexo);
    }
    
}