ler qtd
ganhador = -1
melhor_dist = INT_MAX
para cada participante:
    le preda1, preda2
    if ambas sao maiores ou igual a 10
        dist = p1 - p2
        dist = dist > 0 ? dist : -dist
        if dist < melhor_dist
            ganhador = i
            melhor_dist = dist
if ganhador == -1
    ninguem
else
    ganhador
