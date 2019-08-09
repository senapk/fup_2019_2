#include <stdio.h>

int main(){
    char nome[20] = "";
    char opcao = ' ';
    puts("Digite seu primeiro nome:");
    scanf("%s", nome);
    puts("Voce quer desistir (y/n)?");
    scanf(" %c", &opcao);//maldição do char
    if(opcao == 'y')
        puts("frouxo");
    else if(opcao == 'n')
        puts("chuck noris");
    else
        puts("analfabeto");
}