lista = [2,10,15,17,21,28,40,55,60,61,62,83]

def buscaBinaria(valores, procurado):
    posLi = 0
    posLs = len(lista) - 1

    while (posLi <= posLs):
        posMeio = (posLi + posLs) // 2
        palpite = valores[posMeio]

        if (palpite == procurado):
            return posMeio
        if (palpite > procurado):
            posLs = posMeio - 1
        else:
            posLi = posMeio + 1
    
    return -1

print(buscaBinaria(lista,60))