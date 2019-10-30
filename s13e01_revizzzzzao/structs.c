#include <stdio.h>
#include <memory.h>

typedef struct{
    char nome;//1 byte
    int forca;//4
    int vida;//4
} Orc;


void orc_print(Orc orc){
    printf("%c f:%d v:%d\n", orc.nome, orc.forca, orc.vida);
}

void usar_poder(Orc * orc){
    (*orc).vida += 3;
    orc->vida += 3;
    orc[0].vida += 3;  //todos equivalentes
}

void show_vet(Orc vet[3]){
    for(int i = 0; i < 3; i++)
    orc_print(vet[i]);
}

int main(){
    Orc esportista;

    esportista.nome = 'B';
    esportista.forca= 15;
    esportista.vida = 50;
    orc_print(esportista);

    Orc malvado = {'I', 3, 500};
    orc_print(malvado);

    Orc coracao = {.vida = 30, .forca = 20, .nome = 'C'};
    orc_print(coracao);

    malvado = coracao;
    orc_print(malvado);

    if(malvado.nome == coracao.nome && malvado.forca == coracao.forca)
        puts("que bixo malvado");

    if(memcmp(&malvado, &coracao, sizeof(Orc)) == 0)
        puts("muito iguais");

    malvado = (Orc){'R', 15, 80};
    orc_print(malvado);

    Orc ursinhos[3] = {esportista, malvado, coracao};

}