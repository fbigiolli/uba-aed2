#ifndef ALGO2_LABO_CLASE5_ALGORITMOS_H
#define ALGO2_LABO_CLASE5_ALGORITMOS_H

#include <utility>
#include <iterator>
#include <vector>

using namespace std;

template<class contenedor>
typename Contenedor::value_type minimo(const Contenedor& c){
    typename Contenedor::const_iterator res = c.begin();
    typename Contenedor::const_iterator elem = c.begin();
    while(elem != c.end())
    {
        if (*elem<*res)
        {
            res = elem;
        }
        elem++;
    }
    return *res;
}


#endif //ALGO2_LABO_CLASE5_ALGORITMOS_H
