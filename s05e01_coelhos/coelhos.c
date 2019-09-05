#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int num){
    for(int i = 2; i < num; i++)
        if(num % i == 0)
            return false;
    return true;
}
int contar_primos(int x, int y){
    int cont = 0;
    for(int i = x; i <= y; i++)
        if(eh_primo(i))
            cont++;
    return cont;
}
int main(){
    int x = 0;
    int y = 0;
    scanf("%d %d", &x, &y);
    printf("%d\n", contar_primos(x, y));
}