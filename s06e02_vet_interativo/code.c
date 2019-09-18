#include <stdio.h>

void push_back(int vet[], int *size){
    int value = 0;
    scanf("%d", &value);
    vet[*size] = value;
    *size += 1;
}

void show_vet(int vet[], int size){
    printf("[ ");
    for(int i = 0; i < size; i += 1)
        printf("%d ", vet[i]);
    printf("]\n");
}

void show_vet_contrario(int vet[], int size){
    printf("[ ");
    for(int i = size - 1; i >= 0; i -= 1)
        printf("%d ", vet[i]);
    printf("]\n");
}

int main(){
    int cap = 10;
    int vet[cap];
    int size = 0;
    while(size < cap){
        char op = ' ';
        scanf(" %c", &op);
        if(op == 'a'){
            push_back(vet, &size);
        }else if(op == 's'){
            show_vet(vet, size);
        }else if(op == 'q'){
            break;
        }else if(op == 'S'){
            show_vet_contrario(vet, size);
        }
    }
}