#include <vector>
#include <string>

using namespace std;

// Ej 2

// Idea: Primero hago un diccTrie en el cual las claves seran los nombres de los empleados. 
// De esta forma, buscar/asociar las ventas a un empleado tomara O(1). Entonces, en el significado
// guardo un vector con las ventas de cada empleado. Luego, ordeno los vectores de cada empleado por 
// monto. Vuelco todas las ventas en buckets segun la cantidad de ventas que realizo cada uno, y finalmente
// las junto en el vector res de mayor a menor numero de ventas.

void ventasSort (vector<pair<string,int>> input){

    diccTrie ventasPorEmpleado;

    for (pair<string,int> venta : input) // O(n) todo el ciclo
    {
        if (vacio?(ventasPorEmpleado.obtener(venta.first)))
        {
            ventasPorEmpleado.insertar(venta)
        }
        else
        {
            ventasPorEmpleado.obtener(venta.first).push_back(venta)
        }
    }

    vector<vector<pair<string,int>>> bucketsPorTam;

    for (string empleado:claves(ventasPorEmpleado))
    {
        bucketsPorTam[ventasPorEmpleado.obtener.size()].push_back(ventasPorEmpleado.obtener);
    }
    
    radixSortEnTodosLosBuckets; // O(n) porque el sorting se hace sobre una serie de caracteres acotados para cada venta.

    vector<pair<string,int>> res;

    for (int i = bucketsPorTam.size(); i > -1; i--) 
    {
        res.push_back;
    }
    
    copy(res,input)
}


// Ej 3

struct nodo
{
    bool valor;
    nodo*izq;
    nodo*der;
};


bool estaEquilibrado(nodo*raiz){
    return estaEquilibradoAux(raiz).first;
}

<bool,int,int> estaEquilibradoAux(nodo*raiz){
    if (raiz == null)
    {
        return <true,0,0>;
    }
    
    else
    {
        der = estaEquilibrado(raiz.der)
        izq = estaEquilibrado(raiz.izq)

        if (der.first == false || izq.first == false)
        {
            return false;
        }
        
        else
        {
            if (izq.third + 1 == der.second ||
                izq.third - 1 == der.second ||
                izq.third == der.second)
            {
                if (nodo.raiz == true)
                {
                    return<true, 1+izq.second+der.second, izq.third + der.third>
                }
                
                else
                {
                    return<true,izq.second + der.second, 1 + izq.third + der.third>
                }  
            }

            else
            {
                return <false,0,0>
            }
        }
    }
}


