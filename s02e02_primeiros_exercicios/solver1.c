#include <stdio.h>

int main(){
    int hora = 0;
    int minuto = 0;
    scanf("%d %d", &hora, &minuto);
    if(hora > 12){
        printf("%02d:%02d PM\n", hora, minuto);
    }else{
        printf("%02d:%02d AM\n", hora, minuto);
    }
}