
#include <stdio.h>
#include <stdlib.h>

int compara_int(const void * a, const void * b){
    return (*(int*)a) - (*(int*)b);
}

int compara_float(const void * a, const void * b){
    float fa = (*(float*)a);
    float fb = (*(float*)b);
    if(fa == fb)
        return 0;
    else if(fa < fb)
        return -1;
    else
        return 1;
}


int main(){
    float vet[100];
    int size = sizeof(vet)/sizeof(float);
    for(int i = 0; i < size; i++)
        vet[i] = (rand() % 9000 + 1000)/100.0;
    
    qsort(vet, size, sizeof(float), compara_float);

    for(int i = 0; i < size; i++){
        printf("%.2f ", vet[i]);
        if((i + 1) % 10 == 0)
            puts("");
    }

    


}

