## A máquina escolhe o número
Escolhi o número
]0, 100[ >> 70
]0, 70[ >> 40
]40, 70[ >> 61
acertou

## Você escolhe o número
]0, 100[ >> 70 (M, m, =): m
]0, 70[ >> 20 (M, m, =): M
]20, 70[ >> 61 (M, m, =): =
eu sou ninja!

```c
#include <stdlib.h> //rand, srand
#include <time.h> //time

int rambo(int min, int max){
    return rand() % (max - min + 1) + min;
}

int main(){
    int num = rand() % 11; //entre 0 e INT_MAX

}

```















