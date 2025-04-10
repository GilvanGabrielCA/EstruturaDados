#include <iostream>
#define tam 12

using namespace std;

int buscaLinear(int valores[], int procurado);

int main() {
    int lista[tam] = {2,10,15,17,21,28,40,55,60,61,62,83};
    int result = buscaLinear(lista, 60);
    cout << result;
}

int buscaLinear (int valores[], int procurado){
    for (int i = 0; i < tam; i++){
        if (procurado == valores[i]){
            return i;
        }
    }

    return -1;
}
