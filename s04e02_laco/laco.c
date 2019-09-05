#include <stdio.h>
int main(){
    int inicio = 0;
    int fim = 0;
    scanf("%d %d", &inicio, &fim);
    for(int i = 0; inicio + i <= fim; i++){
        printf("%d %d\n", inicio + i, fim - i);
    }
    for(int i = inicio; i <= fim; i++){
        printf("%d %d\n", i, fim - (i - inicio));
    }
    
}