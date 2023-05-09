
template <class T>
Conjunto<T>::Conjunto() : _raiz() {}

template <class T>
Conjunto<T>::~Conjunto() { 
    // Completar
}

template <class T>
bool Conjunto<T>::pertenece(const T& clave) const {
    Nodo* temp = _raiz;
    
    // Hago la busqueda
    while (temp != NULL)
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
    if (_raiz == NULL)
    {
        _cardinal++;
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
    Nodo* anterior = NULL;
    
    // Hago la busqueda
    while (temp != NULL)
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
        _cardinal++;
        anterior->der = insertado;
    }
    // El ultimo caso posible que queda es que el nodo padre sea mayor, inserto a la derecha.
    else
    {
        _cardinal++;
        anterior->izq = insertado;
    }
}

template <class T>
void Conjunto<T>::remover(const T& e) {
    Nodo* temp = _raiz;

    if (_raiz->der == NULL && _raiz->izq == NULL)
    {
        _cardinal--;
        delete _raiz;
        return;
    }
    
    

    return;
}

template <class T>
const T& Conjunto<T>::siguiente(const T& clave) {

}

template <class T>
const T& Conjunto<T>::minimo() const {

}

template <class T>
const T& Conjunto<T>::maximo() const {

}

template <class T>
unsigned int Conjunto<T>::cardinal() const {
    return _cardinal;
}


template <class T>
void Conjunto<T>::mostrar(std::ostream&) const {

}

