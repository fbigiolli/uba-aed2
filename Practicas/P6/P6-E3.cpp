#include <vector>

using namespace std;

int potenciaLog(int a, int b){
    if(b == 0) return 1; // si el exp es 0 devolver 1

    if (b%2 == 0) // el exponente es par
    {
        int res = potenciaLog(a,b/2);  // T(b/2)
        return res * res;
    }
    
    else
    {
        int res = potenciaLog(a,b-1); // T(b/2)
        return res*a;
    }
}

// La idea es aprovechar las propiedades de la potencia. Al tener un exponente par, podemos aprovechar y devolver el resultado calculando
// el valor con el exponente sobre 2, y multiplicando dos veces este numero obtenemos el mismo valor que haciendo b veces a. De esta forma logramos
// una complejidad logaritmica basada en b 
