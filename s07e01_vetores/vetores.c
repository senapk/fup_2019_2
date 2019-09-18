#include <stdio.h>
#include <stdbool.h>
int main(){
    int vet[] = {2, 3, 1, -3, -3, 3, 7, -2, 2};
    int vet_size = sizeof(vet)/sizeof(int);
    int aux[vet_size];
    for(int i = 0; i < vet_size; i++)
        aux[i] = 0;

    for(int i = 0; i < vet_size; i++)
        if(vet[i] == 3)
            aux[i] = true;            
    
    for(int i = 0; i < vet_size; i++)
        if(aux[i] == false)
            printf("%d ", vet[i]);
}