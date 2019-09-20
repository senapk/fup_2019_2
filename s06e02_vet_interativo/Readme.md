Faça um código que receba um char de ação e insira e remova elementos de uma lista.

- Opções
    - a: insere no final do vetor
    - A: insere no começo do vetor
    - r: remove do final do vetor
    - R: remove do começo do vetor
    - i: insere no meio
    - d: deleta do meio
    - s: mostrar vetor
    - q: encerra a execução

- Entrada
    - se opção for `a` ou `A` receba um valor a ser inserido.
        - Ex: `a 5`, insere o 5 no final
    - se opção for `i` ou `s` 
        - Ex: `i 1 7`, insere o 7 na posição 1
- Saída
    - mostrar o vetor para cada opção `s` aparecer.

```
>>>>>>>>
s
a 4
a 3
a 5
a 7
s
q
========
[ ]
[ 4 3 5 7 ]
<<<<<<<<

>>>>>>>>
a 4
a 3
a 9
s
q
========
[ 4 3 9 ]
<<<<<<<<

>>>>>>>>
A 4
A 3
A 5
a 7
s
q
========
[ 5 3 4 7 ]
<<<<<<<<

>>>>>>>>
A 4
A 3
A 5
a 7
s
q
========
[ 5 3 4 7 ]
<<<<<<<<
```