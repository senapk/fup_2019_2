#include <stdio.h>
#include <math.h>

int main(){
    char opcao = ' ';
    float value = 0.0;
    scanf(" %c %f", &opcao, &value);
    if(opcao == 'c'){
        printf("%d\n", ceil(value));
    }else if(opcao == 'f'){
        printf("%d\n", floor(value));
    }else{
        printf("%d\n", round(value));
    }

}