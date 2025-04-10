#include <iostream>
#include <math.h>
#define tam 12

using namespace std;

int buscaBinaria(int valores[], int procurado);
int main()
{
    int lista[tam] = {2,10,15,17,21,28,40,55,60,61,62,83};
    cout << buscaBinaria(lista, 60);
    return 0;
}

int buscaBinaria(int valores[], int procurado){
    int posLi = 0;
    int posLs = tam - 1;

    while (posLi <= posLs){
        int posMeio = ceil((posLi + posLs)) / 2;
        int palpite = valores[posMeio];

        if (palpite == procurado){
            return posMeio;
        }
        if (palpite > procurado){
            posLs = posMeio - 1;
        }
        else {
            posLi = posMeio + 1;
        }
    }

    return -1;
}

