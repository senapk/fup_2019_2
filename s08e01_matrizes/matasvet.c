#include <stdio.h>

#define at(mat, l, c) mat[(l) * nc + (c)]

void mat_show(int nl, int nc, int mat[nl][nc]){
    for(int l = 0; l < nl; l++){
        printf("[ ");
        for(int c = 0; c < nc; c++)
            printf("%d ", mat[l][c]);
        puts("]");
    }
    puts("-----------------");
}

void mat_load(FILE * file, int nl, int nc, int mat[nl][nc]){
    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            fscanf(file, "%d", &mat[l][c]);
}


int main(){
    FILE * file = fopen("input.txt", "r");
    int nl = 0, nc = 0;
    fscanf(file, "%d %d", &nl, &nc);
    int mat[nl][nc];
    mat_load(file, mat, nl, nc);
    for(;;){
        char op;
        scanf(" %c", &op);
        if(op == 's')
            mat_show(nl, nc, mat);
        if(op == 'b')
            mat_borda(nl, nc, mat);
        if(op == 'q')
            break;
    }
}