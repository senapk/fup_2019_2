#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int l, c;
} Pos;

typedef struct{
    char symbol;
    Pos pos;
    int forca;
    int pv;
} Entity;

void entity_show(Entity e){
    printf("%c [%d, %d] f:%d, pv:%d", e.symbol, e.pos.l, e.pos.c, e.forca, e.pv);
}

Entity entity_criar_monstro(){
    Entity monstro;
    monstro.symbol = rand() % 26 + 'a';
    monstro.pos = (Pos) {0, 0};
    monstro.forca = rand() % 5 + 3;
    monstro.pv = rand() % 10 + 1;
    return monstro;
}

void entity_bater(Entity * one, Entity * two){
    if((*one).pv > 0){
        (*two).pv -= one->forca;
        if(two->pv > 0)
            one[0].pv -= two->forca;
    }
}

int main(){
    srand(time(NULL));
    Entity heroi = {'H', {4, 6}, 7, 50};
    Entity monstros[100];
    int size = 0;
    monstros[size++] = entity_criar_monstro();
    int cont = 0;
    while(heroi.pv > 0){
        for(int i = 0; i < 100; i++)
            puts("");
        for(int i = 0; i < size; i++){
            entity_show(monstros[i]);
            puts("");
        }
        entity_show(heroi);
        puts("");
        entity_bater(&heroi, &monstros[size - 1]);
        if(monstros[size - 1].pv < 0){
            monstros[size++] = entity_criar_monstro();
        }
        getchar();
    }
    for(int i = 0; i < size; i++)
        entity_show(monstros[i]);
}