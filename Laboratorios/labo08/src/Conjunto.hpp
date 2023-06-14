
template <class T>
Conjunto<T>::Conjunto() : _raiz() {}

template <class T>
Conjunto<T>::~Conjunto() { 
    destruirNodos(_raiz);
}

template <class T>
void Conjunto<T>::destruirNodos(Conjunto::Nodo *n)
{
    if(n)
    {
        destruirNodos(n->der);
        destruirNodos(n->izq);
        delete n;
    }

}



template <class T>
bool Conjunto<T>::pertenece(const T& clave) const {

    Nodo* temp = _raiz;
    
    // Hago la busqueda
    while (temp != nullptr)
    {
        if (clave == temp->valor )
        {
            return true;
        }
        
        else if (clave > temp->valor)
        {
            temp = temp->der;
        }
        
        else
        {
            temp = temp->izq;
        }
    }   
    return false;
}

template <class T>
void Conjunto<T>::insertar(const T& clave) {
    Nodo* insertado = new Nodo(clave);
    // si el BST es vacio, lo defino como la raiz
    if (_raiz == nullptr)
    {
        _raiz = insertado;
        return;
    }

    // si el valor es la raiz no lo inserto
    if (_raiz->valor == clave)
    {
        delete insertado;
        return;
    }

    Nodo* temp = _raiz;
    Nodo* anterior = nullptr;
    
    // Hago la busqueda
    while (temp != nullptr)
    {
        // Si lo encuentro, no tengo nada que insertar
        if (clave == temp->valor )
        {
            delete insertado;
            return;
        }
        
        else if (clave > temp->valor)
        {
            anterior = temp;
            temp = temp->der;
        }
        
        else
        {
            anterior = temp;
            temp = temp->izq;
        }
    }   
    // Si salgo del while es porque no lo encontre, entonces tengo que insertarlo en el elemento anterior al NULL que me 
    // quedo despues de tratar de buscarlo.


    // Si el valor del nodo padre es menor, entonces lo tengo que insertar a la derecha
    if (anterior->valor < clave)
    {
        anterior->der = insertado;
    }
    // El ultimo caso posible que queda es que el nodo padre sea mayor, inserto a la derecha.
    else
    {
        anterior->izq = insertado;
    }
}

template <class T>
void Conjunto<T>::remover(const T& e) {
    if (_raiz == nullptr) {
        return; // No hay elementos en el conjunto
    }

    // Buscar el nodo a eliminar y su padre
    Nodo* padre = nullptr;
    Nodo* actual = _raiz;
    while (actual != nullptr && actual->valor != e) {
        padre = actual;
        if (e < actual->valor) {
            actual = actual->izq;
        }
        else {
            actual = actual->der;
        }
    }

    if (actual == nullptr) {
        return; // El elemento no está en el conjunto
    }

    // El nodo a eliminar es una hoja
    if (actual->izq == nullptr && actual->der == nullptr) {
        if (padre == nullptr) {
            _raiz = nullptr; // El nodo a eliminar es la raíz
        }
        else if (actual == padre->izq) {
            padre->izq = nullptr;
        }
        else {
            padre->der = nullptr;
        }
        delete actual;
    }

        // El nodo a eliminar tiene un hijo
    else if (actual->izq == nullptr || actual->der == nullptr) {
        Nodo* hijo;
        if (actual->izq != nullptr) {
            hijo = actual->izq;
        }
        else {
            hijo = actual->der;
        }

        if (padre == nullptr) {
            _raiz = hijo; // El nodo a eliminar es la raíz
        }
        else if (actual == padre->izq) {
            padre->izq = hijo;
        }
        else {
            padre->der = hijo;
        }
        delete actual;
    }

        // El nodo a eliminar tiene dos hijos
    else {
        Nodo* sucesor = actual->der;
        Nodo* padre_sucesor = actual;
        while (sucesor->izq != nullptr) {
            padre_sucesor = sucesor;
            sucesor = sucesor->izq;
        }
        actual->valor = sucesor->valor;
        if (padre_sucesor == actual) {
            actual->der = sucesor->der;
        }
        else {
            padre_sucesor->izq = sucesor->der;
        }
        delete sucesor;
    }
}

template <class T>
const T& Conjunto<T>::siguiente(const T& clave) {
    Nodo* temp = _raiz;

    // Voy hasta el nodo que contiene el valor del que quiero encontrar el siguiente.
    while (temp->valor != clave)
    {
        if (clave > temp->valor)
        {
            temp = temp->der;
        }
        else
        {
            temp = temp->izq;
        }
    }

    if (temp->der != nullptr)
    {
        // Si tiene hijo derecho, busco el minimo en el hijo derecho.
        Nodo* anterior = temp;
        temp = temp->der;

        // Voy lo mas posible a la izquierda
        while(temp != nullptr)
        {
            anterior = temp;
            temp = temp->izq;
        }

        // Devuelvo el valor del ultimo nodo que esta mas a la izquierda del subarbol.
        return anterior->valor;
    }

    else
    {
        // Si no tiene hijo derecho, recorremos el arbol desde la raiz considerando:
        Nodo* temp2 = _raiz;
        Nodo* sucesor = nullptr;

        while (temp2 != nullptr)
        {
            // Si el nodo actual es mayor al valor del que busco sucesor
            if (temp2->valor > temp->valor)
            {
                sucesor = temp2;
                temp2 = temp2->izq;
            }
            else
            {
                temp2 = temp2->der;
            }
        }
        return sucesor->valor;
    }
}

template <class T>
const T& Conjunto<T>::minimo() const {
    Nodo* temp = _raiz;
    Nodo* anterior = nullptr;

    while (temp != nullptr)
    {
        anterior = temp;
        temp = temp->izq;
    }

    return anterior->valor;
}

template <class T>
const T& Conjunto<T>::maximo() const {
    Nodo* temp = _raiz;
    Nodo* anterior = nullptr;

    while (temp != nullptr)
    {
        anterior = temp;
        temp = temp->der;
    }

    return anterior->valor;
}

template <class T>
unsigned int Conjunto<T>::cardinal() const {
    return cardinalAux(_raiz);
}

template<class T>
unsigned int Conjunto<T>::cardinalAux(Conjunto::Nodo *n) const {
    if(n == nullptr) {
        return 0; // caso base: árbol vacío
    }
    else {
        return cardinalAux(n->izq) + cardinalAux(n->der) + 1; // se suma 1 por el nodo actual
    }
}



template <class T>
void Conjunto<T>::mostrar(std::ostream&) const {

}

