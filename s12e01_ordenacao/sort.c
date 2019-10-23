#include <stdio.h>
#include <stdlib.h>

int find_imenor(int vet[], int i, int size){
    int imenor = i;
    for(int j = i + 1; j < size; j++)
        if(vet[j] < vet[imenor])
            imenor = j;
    return imenor;
}
void swap(int * a, int * b){
    int c = *a;
    *a = *b;
    *b = c;
}

void selection_sort(int * vet, int size){
    for(int i = 0; i < size; i++){
        int imenor = find_imenor(vet, i, size);
        swap(vet + 1, &vet[imenor]);
    }
}

int main(){
    int vet[100];
    int size = sizeof(vet)/sizeof(int);
    for(int i = 0; i < size; i++)
        vet[i] = rand() % 90 + 10;
    selection_sort(vet, size);
    for(int i = 0; i < size; i++){
        printf("%d ", vet[i]);
        if((i + 1) % 10 == 0)
            puts("");
    }
    puts("");
}