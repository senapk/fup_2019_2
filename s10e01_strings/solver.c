#include <stdio.h>

const char * pegar_carta(int valor){
    const char * nomes[] = {"", "As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    return nomes[valor];
}

int main(){
    const char * nome = "Fernando Pessoa"; //8 bytes
    
    const char * p = nome;
    puts(nome);
    puts(p);
    puts(pegar_carta(11));
}