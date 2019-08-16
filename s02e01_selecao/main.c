#include <stdio.h>
#include <stdbool.h>
int a = 0; //variavel global
           //durar todo o tempo do programa
        //desaconselhado
int main(){
    int b = 0;
    bool eh_jovem = false;
    int age = 0;
    puts("qual sua idade?");
    scanf("%d", &age);
    
    eh_jovem = age < 65;

    if(!eh_jovem){
        int c = 0;
        puts("ele eh velho");
    }
    int x = (7 < 6) ? 4 : 8;
    printf("x = %d\n", x);
    if(age < 18)
        printf("voce é adolescente\n");
    else
        printf("voce é adulto\n");
}