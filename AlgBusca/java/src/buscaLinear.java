public class buscaLinear {
    public static void main(String[] args) {
        int[] lista = {2,10,15,17,21,28,40,55,60,61,62,83};
        int result = buscaLinear(lista, 60);
        System.out.println(result);
    }

    public static int buscaLinear(int[] valores, int procurado){
       for(int i = 0; i <= valores.length; i++){
           if (procurado == valores[i]){
               return i;
           }
       }

        return -1;
    }
}