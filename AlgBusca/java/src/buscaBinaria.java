public class buscaBinaria {
    public static void main(String[] args) {
        int[] lista = {2,10,15,17,21,28,40,55,60,61,62,83};
        int result = buscaBinaria(lista, 60);
        System.out.println(result);
    }

    public static int buscaBinaria(int[] valores, int procurado){
        int posLi = 0;
        int posLs = valores.length - 1;

        while (posLi <= posLs){
            int posMeio = (posLi + posLs) / 2;
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
}