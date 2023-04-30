#include<string>

using namespace std;

// Ejercicio 1: Pasar a templates
int cuadrado(int x) {
  return x * x;
}

// Ejercicio 2: Pasar a templates
bool contiene(string s, char c) {
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == c) {
      return true;
    }
  }
  return false;
}

// Ejercicio 3: Funcion es prefijo con un template contenedor
template<class Contenedor>
bool esPrefijo(Contenedor c1, Contenedor c2){
    auto c2size = c2.size(); // lo guardo para no recalcularlo en cada iteracion.
    for (int i = 0; i < c1.size(); i++)
    {
        if (i > c2size || c1[i]!=c2[i] )
        {
            return false;
        }
    }
    return true;
}
// Ejercicio 4: Función maximo con un template contenedor y uno elemento
