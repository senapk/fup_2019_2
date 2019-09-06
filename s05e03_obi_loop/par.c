#include <stdio.h>

char * quem_vence(char op1, int num1, int num2){
    if((((op1 == 'p') && (num1 + num2) % 2 == 0)) ||
        (((op1 == 'i') && (num1 + num2) % 2 == 1)))
        return "jog1";
    else
        return "jog2";
}

int main(){
    int qtd = 0;
    scanf("%d", &qtd);
    while(qtd--){
        char op1 = ' ';
        int num1 = 0;
        int num2 = 0;
        scanf(" %c %d %d", &op1, &num1, &num2);
        printf("%s\n", quem_vence(op1, num1, num2));
    }
}