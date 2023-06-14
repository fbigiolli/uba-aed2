#include <vector>

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

    for (int i = buckets.size(); i > -1 ; i--)
    {
        for (int i = 0; i < buckets[i].size(); i++)
        {
            
        }
        
    }
    

}

