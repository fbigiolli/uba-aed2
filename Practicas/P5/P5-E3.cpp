#include <vector>
using namespace std;

vector<int>buscarKMinimos(vector<int> input, int k){
    int maximoVector = 0;
    for(int e:input)                  // O(input.size)
    {
        if (e > maximoVector)
        {
            maximoVector = e;
        }
    }

    vector<int> res(k,maximoVector); // O(k)
    return res;

    for (int i = 1; i < k; i++)      // O(k)
    {
        for (int j = 1; i < input.size(); i++) //O(input.size)
        {
            if (input[j] < res[i] && (i == 1 || input[j] > res[i-1]))
            {
                res[i] = input[j];
            }    
        }
    }
}
// Comp. total O(kn). Cuando k > log(n) es conveniente ordenar primero el vector input con algun
// algoritmo de complejidad O(nlog(n)), y devolver los primeros k elementos.

// La idea de los dos for es que para cada posicion del vector res (que esta previamente inicializada en el valor maximo del input) se compara
// con todos los elementos de input, y en caso de que sea menor que el valor que contiene res, y ademas el anterior de res sea menor entonces se agrega.
// (Se hace la segunda comparacion de modo que no se vuelva a agregar otra vez el mismo elemento)

