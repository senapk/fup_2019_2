## Alocação Dinâmica

- criação de memória na heap
- biblioteca `stdlib.h`
- funções
    - crição: `malloc` e `calloc`
    - liberação: `free`
    - realocação: `realloc`
- 3 regras:
    - toda criação precisa ter uma destruição
    - criar e destruir estejam no mesmo nível lógico
    - após o free, sete pra NULL

### estático
```c
puts("digite 3 números");
int vet[3];
for(int i = 0; i < 3; i++)
    scanf("%d", &vet[i]);
printf("[ ");
for(int i = 0; i < 3; i++)
    printf("%d ", vet[i]);
puts("]");
```

//dinâmico
```c
puts("digite 3 números");
int * vet = calloc(3, sizeof(int));
for(int i = 0; i < 3; i++)
    scanf("%d", &vet[i]);
printf("[ ");
for(int i = 0; i < 3; i++)
    printf("%d ", vet[i]);
puts("]");
free(vet);
```