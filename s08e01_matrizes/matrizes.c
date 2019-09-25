#include <stdio.h>

void mat_show(int mat[], int nl, int nc){
    for(int l = 0; l < nl; l++){
        for(int c = 0; c < nc; c++)
            printf("%d ", mat[l * nc + c]);
        puts("");
    }
}

void mat_show_char(char mat[], int nl, int nc){
    for(int l = 0; l < nl; l++){
        for(int c = 0; c < nc; c++)
            printf("%c ", mat[l * nc + c]);
        puts("");
    }
}

int main(){
    #if 0
    {
        int mat[3][4];
        mat[0][0] = 1;
        mat[0][1] = 2;
        mat[0][2] = 3;
        mat[0][3] = 4;
        mat_show(&mat[0][0], 3, 4);
    }
    {
        int mat[3][3] = {{2,   3, 4}, 
                         {6,   7, 8},
                         {10, 11, 12}};
        mat_show(&mat[0][0], 3, 3);
    }
    #endif
    {
        int nl = 0, nc = 0;
        scanf("%d %d", &nl, &nc);
        int mat[nl][nc];
        for(int l = 0; l < nl; l++)
            for(int c = 0; c < nc; c++)
                scanf("%d", &mat[l][c]);
        mat_show(&mat[0][0], nl, nc);
    }
    {
        int nl = 0, nc = 0;
        scanf("%d %d", &nl, &nc);
        char mat[nl][nc];
        for(int l = 0; l < nl; l++)
            for(int c = 0; c < nc; c++)
                scanf(" %c", &mat[l][c]);
        mat_show_char(&mat[0][0], nl, nc);
    }
    {
        int nl = 5, nc = 7;
        int mat[nl * nc];
        for(int i = 0; i < nl * nc; i++)
            mat[]
    }
}