#include <math.h>
#define SEIS 6

extern int printf (const char *__restrict __format, ...);
extern int puts (const char *__s);
extern int scanf (const char *__restrict __format, ...) ;

int main(int argc, char * argv[]){
#if 1 
    //int x;
    const char * acao = "afagos"; //comentaaaario
    /*lvalue = rvalue */
    /*lugar  = valor */

    //variavel que define o valor do coracao
    int valor = SEIS;
    puts("Digite quanto vale o seu coracao");
    scanf("%d", &valor);
    printf("Seu coracao vale %d %s\n", valor, acao);
#endif
    printf("%f", round(5.4));
    puts("te amo beibi!");
}
