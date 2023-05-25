template <typename T>
string_map<T>::string_map(): _size(0) , raiz(nullptr){
    // COMPLETAR
}

template <typename T>
string_map<T>::string_map(const string_map<T>& aCopiar) : string_map() { *this = aCopiar; } // Provisto por la catedra: utiliza el operador asignacion para realizar la copia.

template <typename T>
string_map<T>& string_map<T>::operator=(const string_map<T>& d) {

    // Se limpia el diccionario actual en caso de que estemos realizando la copia teniendo un diccionario con valores previamente definidos
    clear();

    // Se copia el tamaño
    _size = d._size;

    // Se copian los elementos
    if (d.raiz != nullptr) {
        raiz = new Nodo();
        copyNodes(d.raiz, raiz);
    } else {
        raiz = nullptr;
    }

    return *this;
}

template <typename T>
void string_map<T>::copyNodes(const Nodo* from, Nodo* to) {
    // Si el nodo a copiar no es null se define
    if (from->definicion != nullptr) {
        to->definicion = new T(*(from->definicion));
    } else {
        to->definicion = nullptr;
    }

    to->siguientes.resize(256, nullptr);  // Inicializar el vector de siguientes en el nodo de destino

    // Se copian los siguientes volviendo a llamar la funcion en cada nodo que no sea nulo
    for (int i = 0; i < 256; i++) {
        if (from->siguientes[i] != nullptr) {
            to->siguientes[i] = new Nodo();
            copyNodes(from->siguientes[i], to->siguientes[i]);
        }
    }
}

template <typename T>
void string_map<T>::clear() {
    if (raiz != nullptr) {
        clearNodes(raiz);
        delete raiz;
        raiz = nullptr;
    }
    _size = 0;
}

template <typename T>
void string_map<T>::clearNodes(Nodo* nodo) {
    for (int i = 0; i < 256; i++) {
        if (nodo->siguientes[i] != nullptr) {
            clearNodes(nodo->siguientes[i]);
            delete nodo->siguientes[i];
            nodo->siguientes[i] = nullptr;
        }
    }
    if (nodo->definicion != nullptr) {
        delete nodo->definicion;
        nodo->definicion = nullptr;
    }
}

template <typename T>
string_map<T>::~string_map(){
    clear();
}

template <typename T>
T& string_map<T>::operator[](const string& clave){
    // COMPLETAR
}

template<typename T>
void string_map<T>::insert(const pair<std::string, T>& elemento) {
    if (raiz == nullptr) {
        raiz = new Nodo();
        raiz->siguientes.resize(256, nullptr);  // Se asignan 256 posiciones al vector de siguientes con nullptr en cada una de ellas.
    }

    Nodo* actual = raiz;
    const std::string& clave = elemento.first;
    const T& valor = elemento.second;

    for (char c : clave) {
        if (actual->siguientes[(int)c] == nullptr) {
            actual->siguientes[(int)c] = new Nodo();
            actual->siguientes[(int)c]->siguientes = vector<Nodo*>(256, nullptr);  // Se inicializa con 256 nullptr
        }

        actual = actual->siguientes[(int)c];
    }

    if (actual->definicion == nullptr) {
        actual->definicion = new T(valor);
        _size++;
    } else {
        *(actual->definicion) = valor;  // Se actualiza el valor si ya existe una definición
    }
}


template <typename T>
int string_map<T>::count(const string& clave) const {
    if(raiz == nullptr) return 0;

    const Nodo* actual = raiz;

    for (char c : clave) {
        if (actual->siguientes[(int)c] == nullptr) return 0;
        actual = actual->siguientes[(int)c];
    }

    // Se verifica que la clave en cuestión tenga una definición asociada.
    return (actual->definicion != nullptr) ? 1 : 0;
}


template <typename T>
const T& string_map<T>::at(const string& clave) const {
    const Nodo* actual = raiz;

    for (char c : clave) {
        actual = actual->siguientes[(int)c];
    }
    return *(actual->definicion);
}

template <typename T>
T& string_map<T>::at(const string& clave) {
    const Nodo* actual = raiz;

    for (char c : clave) {
        actual = actual->siguientes[(int)c];
    }
    return *(actual->definicion);
}

// Precondicion: la clave esta definida.
template <typename T>
void string_map<T>::erase(const string& clave) {

    Nodo* actual = raiz;
    Nodo* padre = nullptr;
    int indicePadre = 0;

    for (char c : clave) {
        int indice = (int)c;

        padre = actual;
        actual = actual->siguientes[indice];
        indicePadre = indice;
    }

    if (actual->definicion != nullptr) {
        delete actual->definicion;
        actual->definicion = nullptr;
        _size--;
    }

    // Se verifica si el nodo tiene hijos y no tiene definición
    if (actual->definicion == nullptr) {
        bool tieneHijos = false;

        for (Nodo* siguiente : actual->siguientes) {
            if (siguiente != nullptr) {
                tieneHijos = true;
                break;
            }
        }

        if (!tieneHijos) {
            delete actual;
            padre->siguientes[indicePadre] = nullptr;
        }
    }
}


template <typename T>
int string_map<T>::size() const{
    return _size;
}

template <typename T>
bool string_map<T>::empty() const{
    return (_size == 0) ? true : false;
}