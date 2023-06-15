#include <vector>
#include <list>

using namespace std;

// Ejercicio 1 

/* La idea principal es usar un diccionario AVL. En primer lugar recorremos todo el array, y vamos definiendo
   la clave si no esta definida, y si esta definida aumentamos en 1 su significado, de forma que vayamos contando
   las apariciones en el array. Luego, armamos el vector resuelto recorriendo el arbol de menor a mayor, y poniendo la 
   cantidad necesaria segun las apariciones.*/

vector<int> AVLSort(vector<int> input){
    vector<int> res;                    // O(1)
    diccAVL apariciones;                // O(1)


    // Contar la cantidad de apariciones y guardarlas en el diccAVL.
    for(int num:input)                  // O(n)
    {
        if (apariciones.definido(num))             // O(log(D))
        {
            int actual = apariciones.obtener(num); // O(log(D))
            apariciones.definir(num,actual + 1);   // O(log(D))
        }

        else
        {
            apariciones.definir(num,1);            // O(log(D))
        }
    }

    // Definir los elementos en el vector de resultado.

    while (not apariciones.empty())                 // O(n)
    {
        int minimo = apariciones.masALaIzquierda(); // O(log(D))
        for (int i = 0; i < apariciones.obtener(minimo); i++) // O(n) porque a lo sumo es un solo elemento el que aparece n veces en el array
        {
            res.push_back(minimo);
        }
    }
    return res;
}

// Complejidad final: nlogd 

// Ejercicio 2

/*La idea es ir recorriendo el array y armando buckets en base al tamanio del edificio*/

vector<int> arquitectoSort(vector<int> input, int tolerancia){
    vector<int> res(input.size());

    // Armar los buckets. 

    vector<vector<pair<int,int>>> buckets(input.size());

    /* Armo los buckets con el tamanio del input porque a lo sumo tengo un edificio
     solo del maximo largo posible, y ese caso iria en la ultima pos del array */

    int prim = 0;
    int tam = 0;

    for (int i = 0; i < input.size() - 1; i++)
    {
        if (input[i] - input[i+1] < tolerancia)
        {
            tam++;
        }

        else
        {
            buckets[tam].push_back(make_pair(prim,i)); 
            prim = i;
            tam = 0;
        }
    }
    
    // Voy metiendo en res los elementos 

    int pos = 0;

    for (int i = buckets.size(); i > -1 ; i--)
    {
        for (int j = 0; j < buckets[i].size(); j++)
        {
            for (int k = buckets[i][j].first; k < buckets[i][j].second; k++)
            {
                res[pos] = input[k];
                pos++;
            }   
        }        
    }

    return res;
}

// Ejercicio 3

/*Idea: como el array crece de a 1 en sus posiciones excepto cuando hay un hueco, se puede hacer
  una especie de busqueda binaria modificada, en la que se compare el ultimo elemento de una mitad con
  la suma del primer elemento + la diferencia entre ambas posiciones, por ej si la mitad va desde 0 a 3 
  y en la pos 0 tenemos el 13, y en el 3 el 16 sumamos 13 + 3 = 16, por lo que podemos afirmar dada la precondicion
  del enunciado que no hay un hueco. De este modo, buscamos en la otra mitad. Otra idea posible, que es la de la implementacion
  es que la resta entre el elem final y el principio tiene que diferir en la resta de los indices.*/

void buscarHuecos(vector<int> input, int begin, int end, list<int> &huecos){

    // Caso base
    if (begin + 1 == end)
    {
        // Conquer
        for (int i = input[begin] + 1 ; i < input[end] - 1 ; i++)  
        {
            // Merge
            huecos.push_back(i); // La idea de este for es que si llegue a la situacion que mi low, high son elementos consecuentes, y por ejemplo son 13 y 16 tengo que agregar desde el 13+1 hasta el 16-1 (14,15)
        }
    }

    else
    {
        int mid = (begin+end) / 2;
        if (input[mid] - input[begin] != mid - begin ) // Caso donde tengo un hueco a la izquierda.
        {
            buscarHuecos(input,begin,mid,huecos);
        }

        if (input[end] - input[mid] != end-mid) // Caso donde tengo un hueco a la derecha.
        {
            buscarHuecos(input,begin,mid,huecos); 
        }
    }
}

list<int> huecos(vector<int> input, int size){
    list<int> listaHuecos;
    if(size == 1) return listaHuecos; // vacia, no hay huecos

    buscarHuecos(input, 0, size, listaHuecos);
    return listaHuecos;
}
/* En el caso en el que K es 1, se que en el arreglo tengo un solo hueco presente. De esta forma, puedo afirmar que voy a tener que revolver 
   un solo subproblema, por lo que a=1, c=2 porque mi arreglo se parte en dos mitades. Entonces, aplicando el teorema maestro llego al resultado 
   de que la complejidad resultante es O(log(n)).
   
   En el caso en el que tengo k huecos, voy a tener que hacer k recursiones hasta encontrar todos los huecos. Como cada recursion parte el array en 2,
   esto tiene complejidad logaritmica, lo que deriva en una complejidad total acotada por O(klog(n))*/

   