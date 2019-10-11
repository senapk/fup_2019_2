#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

void fill_nome(char nome[]){
    const char * alfabeto[] = {"bcdfghjklmnpqrstvwxz", "aeiou"};
    int letras = rand () % 4 + 3;
    int size = 0;
    for(int i = 0; i < letras; i++){
        const char * data = alfabeto[i % 2];
        char c = data[rand() % strlen(data)];
        if(i == 0)
            c = toupper(c);
        nome[size++] = c;
    }
    nome[size] = '\0';
}

int main(){
    srand(time(NULL));
    char completo[50] = "";
    char nome[10] = "";
    
    int qtd = 10;
    while(qtd--){
        fill_nome(nome);
        strcpy(completo, nome);
        strcat(completo, " ");
        fill_nome(nome);
        strcat(completo, nome);
        puts(completo);
    }

}