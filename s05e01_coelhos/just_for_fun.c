#include <stdio.h>
int soma(int a, int b);
int soma(int a, int b);
int soma(int a, int b);
int soma(int a, int b);
int soma(int a, int b);

int faz_uma_coisa(int a, int b, int (*fn)(int, int)){
    return fn(a, b);
}

int soma(int a, int b){ //definição
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
extern int b; //declarando

int main(){    
    int a = 5;
    int c = faz_uma_coisa(a, b, soma);
    printf("%d\n", c);
}