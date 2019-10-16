#include <stdio.h>

int main(){
    int nl = 0, nc = 0;
    scanf("%d %d", &nl, &nc);
    int mat[nl][nc];
    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            scanf("%d", &mat[l][c]);

    int cont = 0;
    for(int l = 0; l < nl - 1; l++)
        for(int c = 0; c < nc; c++)
            if(mat[l + 1][c] < mat[l][c])
                cont += 1;
    printf("%d\n", cont);
}