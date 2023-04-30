using namespace std;

template<class T>
T cuadrado(T x){
    return x*x;
}

template<class Contenedor, class Elem>
bool contiene(Contenedor s, Elem c){
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            return true;
        }
    }
    return false;
}

template<class Contenedor>
bool esPrefijo(Contenedor c1, Contenedor c2){
    if (c1.size() > c2.size()) return false;
    for (int i = 0; i < c1.size(); i++)
    {
        if (c1[i]!=c2[i] )
        {
            return false;
        }
    }
    return true;
}

template<class Contenedor, class Elem>
Elem maximo(Contenedor c){
    Elem max = c[0];
    for (int i = 1; i < c.size(); i++)
    {
        if (c[i] > max)
        {
            max = c[i];
        }        
    }
    return max;
}

