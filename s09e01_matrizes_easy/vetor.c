#include <stdio.h>
int main(){
    int size = 0, pos = 0, forca = 0;
    scanf("%d %d %d", &size, &pos, &forca);
    int vet[size];
    for(int i = 0; i < size; i++)
        vet[i] = 0;
    int forca_bak = forca;
    int desl[2] = {1, -1};
    for(int d = 0; d < 2; d++){
        forca = forca_bak;
        for(int i = pos; forca > 0; i += desl[d], forca -= 1){
            if((i >= size) || (i < 0))
                break;
            vet[i] = forca;
        }
    }
    for(int i = 0; i < size; i++){
        if(vet[i] == 0)
            printf(".");
        else
            printf("%d", vet[i]);
    }
    puts("");
}

