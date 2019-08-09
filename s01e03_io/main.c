#include <stdio.h>

int main(){
    char nome[20] = "";
    int idade = 0;
    float peso = 0.0;
    char sexo = ' ';

    puts("Digite nome idade peso sexo(m/f)");
    int qtd = scanf("%s %d %f %c", nome, &idade, &peso, &sexo);
    printf("Seu nome eh %s\n", nome);
    printf("Sua idade eh %d e peso %f\n", idade, peso);
    printf("Seu sexo eh %c\n", sexo);
    printf("Consegui ler %d coisas\n", qtd);
}
