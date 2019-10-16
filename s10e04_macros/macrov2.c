#include <stdio.h>

typedef struct{
    int l, c;
} Ponto;

#define gerar_vizinhos(l, c) {{l - 1, c -1}, {l - 1, c}, {l - 1, c + 1}, {l, c + 1}, {l + 1, c}, {l + 1, c + 1}, {l, c - 1}, {l + 1, c - 1}}

int main(){
    int nl, nc;
    scanf("%d %d", &nl, &nc);
    char mat[nl][nc];
    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            scanf(" %c", &mat[l][c]);

    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++){
            if(mat[l][c] == '-'){
                Ponto viz[8] = gerar_vizinhos(l, c);
                    for(int i = 0; i < 8; i++){
                        if(viz[i].l >= 0 && viz[i].l >= 0, viz[i].c
                    }
            
            }
                printf("l %d, c %d\n", viz[i].l, viz[i].c);
        }

    
}