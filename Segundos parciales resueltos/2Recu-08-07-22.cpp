#include <vector>
#include <string>

using namespace std;

// Ejercicio 1

/*En primer lugar, recorremos el array original para separar los elementos en 3 arrays: los que estan acotados
  por L, los que estan entre L y M y los que son mayores que H.
  Asumiendo que los elementos menores a L vienen ordenados decrecientemente en el array, lo que tengo que hacer al 
  agregarlos a res es devolverlos de forma decreciente. Para los que estan entre L y M aplico cualquier algoritmo de ordenamiento
  con complejidad en peor caso cuadratica, ya que tengo raiz de N elementos, lo que resulta en complejidad lineal. Finalmente,  
  agrego los elementos mayores y ese es mi resultado. */


void semiSort(vector<int>& input, int L, int H){
    vector<int> low;
    vector<int> mid;
    vector<int> high;

    for(int n:input)                         //O(n)
    {
        if (n < L)
        {
            low.push_back(n);
        }
        
        else if (L < n < H)
        {
            mid.push_back(n);
        }
        
        else
        {
            high.push_back(n);
        }
    }

    selectionSort(mid);                     // O(n) porque tengo raiz de n elementos


    int posTemp = 0;
    for (int i = low.size(); i > -1; i--)   // O(n)
    {
        input[posTemp] = low[i];
        posTemp++;
    }
    
    for (int n:mid)                         // O(n)
    {
        input[posTemp] = n;
        posTemp++;
    }
    
    for (int n:high)                        // O(n)
    {
        input[posTemp] = n;
        posTemp++;
    }

    /*Es facil notar que la complejidad de los 3 for esta acotada por N, dado que a lo sumo todos los elementos del array se encontraran
      en alguna de las 3 cotas posibles. Ademas, la suma de size de los 3 arrays da como resultado el size del array original.*/
}

// Ejercicio 2

/*Aprovechando que las claves estan acotadas por una constante, y tambien el abecedario puedo contar en un dicc trie las apariciones. De este modo,
  recorro primero mi input para contar las apariciones,  y luego en base al ranking entro a la cantidad de apariciones que conte, y voy armando res.*/

vector<string> rankingSort(vector<string> ranking, vector<string> input){
    diccTrie apariciones;       // O(1)

    for (string pais:ranking)   // O(ranking)
    {
        ranking.definir(pais,0); // O(1)
    }

    for (string pais:input)    // O(input)
    {
        int cont = ranking.obtener(pais); // O(1)
        ranking.definir(pais,cont+1);     // O(1)
    }

    vector<string> res;                  // O(1)

    for(string pais:ranking)   // O(max(|ranking|,|input|))
    {
        int cant = ranking.obtener(pais); // O(1)

        for (int i = 0; i < cant; i++)    // O(cont), cont < |input| 
        {
            res.push_back(pais);          // O(1)
        }
    }

    return res;
}


// Ejercicio 3

/*El ejercicio basicamente es una modificacion de la busqueda binaria*/

int minimoDelArreglo(vector<int> input, int begin, int end){
    if(end - begin == 1) return input[begin];

    int mid = (end+begin) / 2;

    if (input[mid] > input [mid - 1]) // estoy a la derecha
    {
        minimoDelArreglo(input,begin,mid);
    }

    else
    {
        minimoDelArreglo(input,mid, end);
    }
}

// En el teo maestro, a = 1, c = 2, f(n) = 1 entro en el caso 2, con n^0 termina dando theta(log(n))