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