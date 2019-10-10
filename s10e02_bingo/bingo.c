#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>//rand srand
#include <time.h>//time
#define MAX 75

int retirar_do_globo(bool globo[MAX]){
    int vaux[MAX];
    int size = 0;
    for(int i = 0; i < MAX; i++)
        if(globo[i])
            vaux[size++] = i;
    if(size == 0)
        return -1;
    int pos = rand() % size;
    globo[vaux[pos]] = false;
    return vaux[pos] + 1;
}

void show_mat(bool vet[MAX], bool comparador){
    for(int i = 0; i < MAX; i++){
        if(vet[i] == comparador)
            printf("%02d", i + 1);
        else
            printf("--");
        printf("%c", (i + 1) % 15 == 0 ? '\n' : ' ');
    }
}

int main(){
    srand(time(NULL));
    bool globo[MAX];
    for(int i = 0; i < MAX; i++)
        globo[i] = true;
    while(true){
        puts("digite 1 para sortear e 0 para capar o gato");
        int value;
        scanf("%d", &value);
        if(value == 0)
            break;
        int bolinha = retirar_do_globo(globo);
        printf("Retirei a bolinha %d\n", bolinha);
        puts("globo");
        show_mat(globo, true);
        puts("hack");
        show_mat(globo, false);
    }
}