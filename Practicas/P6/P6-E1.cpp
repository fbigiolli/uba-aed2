#include <vector>

using namespace std;

bool vectorDeIzquierda(vector<int> input, int bgin, int end){
    if(end == bgin) return true;

    int mid = (bgin + end) / 2; // si le ponia begin cpp explota

    int sumaIzq = sumar(input, bgin, mid); // O(n) (En realidad seria n/2, pero en notacion bigO queda igual, y esto no es la recursion)
    int sumaDer = sumar(input, mid, end);   // O(n)

    if(sumaDer>=sumaIzq) return false;

    else
        return(vectorDeIzquierda(input,bgin,mid) &&  vectorDeIzquierda(input,mid,end)); // 2*T(n/2)
}


int sumar(vector<int> input, int bgin, int end){
    int output = 0;
    for (int i = bgin; i < end; i++)
    {
        output += input[i];
    }
    return output;
}

/*Estamos en el segundo caso del teorema maestro, ya que para a=2 (nro de subproblemas), c=2 (en cuanto partimos el vector), y f(n) = n 
  nos queda que f(n) pertenece a theta(n), y por lo tanto la complejidad final del algoritmo es nlogn */

  /*La explicacion intuitiva para la complejidad obtenida es que estamos haciendo la suma a izquierda y derecha para compararlas en cada subproblema,
   esta suma esta acotdada por O(n), y la hacemos log(n) veces. (lo escribo porque me costo muchisimo entender la idea intuitiva atras de la complejidad obtenida)*/
   