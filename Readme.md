# Links
- [Youtube](https://www.youtube.com/playlist?list=PLqwyjBSVOHRzgNEUNwc0hAHBOxy5M5JXW)
- [Hangouts](https://hangouts.google.com/group/wsUdaz37EtLqA5ni9)
- Moodle:  
- [OBI](https://olimpiada.ic.unicamp.br/pratique/pj/)

## S01E01 - Boas Vindas
- Casa
  - [ ] Leia a apostila
  - [ ] Instale o git
  - [ ] Clone o repositório
  - [ ] Atualize sua foto no Si3
  - [ ] [Configure seu ambiente](instalacao.md)

## S01E02
- Casa
  - [ ] Faça um resumo sobre os tópicos abordados nessa aula.
- Diário
  - [Preprocessador, Compilador, Linker](https://pt.wikibooks.org/wiki/Programar_em_C%2B%2B/Compila%C3%A7%C3%A3o)
    - preprocessador: `gcc -E teste.c`
    - compilador: `gcc -c teste.c`
    - linker: `gcc teste.c -o teste`
    - flags mínimas: `-Wall`
  - Código fonte, Código objeto
  - tipagem forte x fraca
  - tipagem implicita x explicita
  - Variável, Constante, Rvalue, Lvalue
  - Escopo (delimitante do tempo de vida)
  - gcc, make

## S01E03 - Variáveis, Tipos e I/O
- Casa
    - [ ] baixe todos os códigos da aula de hoje, leia, altere qualquer coisa e teste o código verificando sempre os erros que aparecem e testando os comportamentos.
- Diário
    - Regras básicas de estilo
    - Lendo e escrevendo
        - strings, int, float, char
        - scanf retornando quantidade de variáveis lidas
        - travando o scanf com entrada errada
        - comunicação teclado - buffer - programa
    - Madições
        - Maldição do char scanf("%c")
        - Maldição da divisão inteira
    - Impressão formatada
        - Imprimindo zeros à esquerda HH:MM:SS
        - Imprimindo casas decimais no float