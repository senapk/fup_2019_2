#include <stdio.h>

#define SWAP(a, b, tipo) \
    do{\
        tipo SWAP = a;\
        a = b;\
        b = SWAP;\
    }while(0);

int main(){
        int x = 6;
        int c = 7;
        if(x == 6)
            SWAP(x, c, int);
        
        float x = 6;
        float y = 7;
        SWAP(x, y, float);

        char * nome1 = "banana";
        char * nome2 = "ovo";
        SWAP(nome1, nome2, char *);

}