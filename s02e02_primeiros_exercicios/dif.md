Leia hora e minuto de dois horários diferentes, um por linha e informe quanto tempo falta em minutos de uma hora para outra.

```
>>>>>>>>
15
7
15
12
========
5
<<<<<<<<

>>>>>>>>
4
17
5
17
========
60
<<<<<<<<

>>>>>>>>
23
59
0
1
========
2
<<<<<<<<

>>>>>>>>
5
15
5
10
========
715
<<<<<<<<

```

h1, m1
t1 = h1 * 60 + m1

h2, m2
t2 = h2 * 60 + m2

total = t2 - t1
if(total < 0)
    total += 60 * 24

printf("%02d:%02d\n", (total / 60), (total % 60));