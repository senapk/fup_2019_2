#include <stdio.h>

int main(){
    int qtd = 0;
    scanf("%d", &qtd);
    double soma = 0;
    double vet[qtd];
    for(int i = 0; i < qtd; i++){
        scanf("%f", &vet[i]);
        soma += vet[i];
    }
    double media = soma / qtd;
    int cont = 0;
    for(int i = 0; i < qtd; i++){
        if(vet[i] < media)
            cont++;
    }
    printf("%d\n", cont);
}