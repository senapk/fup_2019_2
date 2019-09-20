## A máquina escolhe o número
Escolhi o número
]0, 100[ >> 70
]0, 70[ >> 72
bocó, entre 0 e 70 >> -4
bocó, entre 0 e 70
]40, 70[ >> 61
acertou

## Você escolhe o número
]0, 100[ >> 70 (M, m, =): m
]0, 70[ >> 20 (M, m, =): M
]20, 70[ >> 61 (M, m, =): =
eu sou ninja!

## Você escolhe o número
]0, 100[ >> 70 (M, m, =): m
]0, 70[ >> 20 (M, m, =): M
]20, 70[ >> 61 (M, m, =): =
eu sou ninja!



```c
#include <stdlib.h> //rand, srand
#include <time.h> //time

//gera números no intervalo [min, max]
int rand_mm(int min, int max){
    return rand() % (max - min + 1) + min;
}

int main(){
    srand(time(NULL));
    int num = rand_mm(3, 5);
}
```

```
maquina gera num entre 1 e 99
min = 0
max = 100
faca pra sempre:
    mostre o intervalor
    faca pra sempre
        pegue chute do usuario
        if(num <= min || num >= max)
            print("dentro do intervalo")
        else
            break
    se chute for igual
        ganhou!!!!
        break
    se chute > num:
        max = chute
    se chute < num:
        min = chute
```