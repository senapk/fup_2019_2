#include <stdio.h>

void mat_show(int nl, int nc, int mat[nl][nc]){
    for(int j = 0; j < nl; j++){
        printf("[ ");
        for(int i = 0; i < nc; i++){
            printf("%d ", mat[j][i]);
        }
        printf("]\n");
    }
}

int main(){
    int mat[3][6] = {{3, 2, 1, 1, 2, 3}, 
                     {9, 8, 7, 7, 8, 9}, 
                     {5, 6, 0, 0, 1, 2}};
    mat_show(3, 6, mat);
}