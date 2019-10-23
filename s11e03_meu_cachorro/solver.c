#include <stdio.h>

int main(){
    char linha[200];
    char resp[200];
    int size = 0;
    fgets(linha, sizeof(linha), stdin);
    printf("%c", linha[0]);
    for(int i = 0; linha[i] != '\n'; i++){
        if(linha[i] != ' ' || linha[i - 1] != ' ')
            resp[size++] = linha[i];
    }
    resp[size] = '\0';
    puts(resp);
}