#include <vector>
using namespace std;

/* Primero armo un vector para guardar tuplas que indiquen inicio y fin de cada escalera.
    Una vez que tengo inicio y fin de cada escalera, en primer lugar las ordeno por el primer
    elemento de cada escalera, y luego por su tamanio para devolverlas como lo pide el enunciado.
    Lo unico importante en este ejercicio (ya que no se nos da una cota para la complejidad) es usar
    un algoritmo estable, de modo que al hacer el segundo ordenamiento no se nos rompa el orden anterior.
    Por ejemplo, se puede usar merge sort (y de paso nos ahorramos la complejidad cuadratica de otros alg estables,
    sabemos que es la menor posible por el teorema de lower bound y todos quedan contentos =) )
    */

void escaleraSort(vector<int> input){
    vector<pair<int,int>> posEscaleras;

    for (int i = 1; i < input.size(); i++)  // O(n)
    {
        int j = i;
        while (input[j]-1 == input[j-1])
        {
            j++;
        }
        posEscaleras.push_back(make_pair(i,j));
    }

    mergeSort_byValue(posEscaleras,input); // Ordeno segun el valor del primer elemento de cada escalera O(nlogn)
    mergeSort_bySize(posEscaleras); // Ordeno segun size de cada escalera. O(nlogn)

    // Ambos sort estan acotados por nlogn dado que a lo sumo hay n escaleras.

    vector<int> sorted;

    for (pair<int,int> e: posEscaleras)       // O(n)
    {
        int beginEsc = e.first;
        while (beginEsc <= e.second)
        {
            sorted.push_back(input[e.first]);
            beginEsc++;
        } 
    }
    
    for (int i = 0; i < sorted.size(); i++)
    {
        input[i] = sorted[i];
    } // O(n) copiar vector

} 

// La complejidad final es O(nlogn)