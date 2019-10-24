#include <stdio.h>
#include <stdlib.h>

int * x;
int main(){
    if(1){
        x = malloc(sizeof(int)); //retorna 400
        *x = 7;
        free(x); //eu nao quero mais usar o 400
        //x = NULL;
    }
    if(x != NULL){
        printf("eu sou o %d\n", *x);
        printf("eu moro no %p\n", x);
    }
}