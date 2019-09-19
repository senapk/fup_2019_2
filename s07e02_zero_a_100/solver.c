#include <stdlib.h> //rand, srand
#include <time.h> //time
#include <stdio.h>
int rambo(int min, int max);
int rambo(int min, int max){
    return rand() % (max - min + 1) + min;
}

int main(){
    srand((unsigned) time(NULL));
    int qtd = 10;
    while(qtd--)
        printf("%d ", rambo(4, 7));
    puts("");
}
