lista = [2,10,15,17,21,28,40,55,60,61,62,83]

print(buscaLinear(60))

def buscaLinear(procurado):
    for i in range(len(lista)):
        if lista[i] == procurado:
            return i
    
    return -1
