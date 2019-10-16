#include <stdio.h>
#include <string.h>

const char * pegar_carta(int valor){
    const char * nomes[] = {"", "As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    return nomes[valor];
}

void preencher_carta(int valor, char * nome){
    if(valor == 1)
        strcpy(nome, "As");
    if(valor == 11)
        strcpy(nome, "J");
}

int main(){
    //char aluno1[] = "Fernandinho Beira Lago";
    //char aluno2[] = "Fernandinho Beira Lago";
    {
        char nome[10];
        preencher_carta(1, nome);

        char nome2[10];
        preencher_carta(11, nome2);
        puts(nome);
        puts(nome2);

        const char * fruta = "caju";
        (void) fruta;
        char saida[100] = "";
        strcat(saida, "hoje ");
        strcat(saida, "vamos ");
        strcat(saida, "sair!");

        char vitamina[10];
        strcpy(vitamina, "banana");
        strcat(vitamina, " abacate");

        if(strcmp("banana", "abacate") > 0)
            puts("banana");
    }
    {
        char * texto = "hoje eu vou malhar ate ficar bombado";
        char * vogais = "aeiouAEIOU";
        int size = strlen(texto);
        //int cont = 0;
        char so_as_vogais[50];
        int vsize = 0;
        for(int i = 0; i < size; i++)
            for(int j = 0; j < 10; j++){
                if(texto[i] == vogais[j]){
                    so_as_vogais[vsize++] = texto[i];
                    break;
                }
            }
        printf("vogais %d\n", vsize);
        so_as_vogais[vsize] = '\0';
        puts(so_as_vogais);
        //strcat, strcmp, strlen, strcpy
    }
//    fgets
    {
        char texto[50];
        sprintf(texto, "Hoje comi %d bananas", 10);
        char item[] = "goiaba 1.50 hortifutri P";
        char nome[20];
        float value;
        char setor[50];
        char medida;
        sscanf(item, "%s %f %s %c", nome, &value, setor, &medida);
    }
    {
        #if 0
        char nome[100];
        puts("Digite seu nome compreto");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        printf("o seu nome %s eh lindho!\n", nome);
        #endif
    }
    {
        puts("aqui");
        char * texto = "hoje eu vou malhar ate ficar bombado";
        char * backup = texto;
        for(;;){
            int dist = strcspn(texto, "aeiou");
            texto += dist;
            if(texto[0] == '\0')
                break;
            else
                printf("%c", texto[0]);
                texto += 1;
        }
        puts("");
    }
    {
        char musica[100] = "tok toqui didhay toque que isso ai nao ta com nada";
        char * str = musica;
        char * token;
        while((token = __strtok_r(NULL, " ", &str)))
            printf("%s\n", token);
    }
    {
        char estoque[100] = "nescau sereauuuuu light cremoso;10 2.30";
        char * str = estoque;
        char * nome = __strtok_r(NULL, ";", &str);
        int qtd;
        float valor;
        sscanf(str, "%d %f", &qtd, &valor);
        printf("%s %d", nome, qtd);
    }
}
