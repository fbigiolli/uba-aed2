#include "Lista.h"
#include <cassert>

Lista::Lista() : prim() {
    // Completar
}

Lista::Lista(const Lista& l) : Lista() {
    copiarNodos(l);
    
}

Lista::~Lista() {
    destruirNodos();
}

Lista& Lista::operator=(const Lista& aCopiar) {
    destruirNodos();
    copiarNodos(aCopiar);
    return *this;
}

void Lista::destruirNodos(){
    Nodo* temp = prim;
    while (temp != NULL)
    {
        Nodo* next = temp->next;
        delete temp;
        temp = next;
    }
    prim = NULL;
}

void Lista::copiarNodos(const Lista &l){
    Nodo* actual = l.prim;
    while(actual != NULL)
    {
        agregarAtras(actual->data);
        actual = actual->next;
    }
}

void Lista::agregarAdelante(const int& elem) {
    Nodo* nuevo = new Nodo(NULL,elem,NULL);
    if (prim == NULL)
    {
        prim = nuevo;
        return;
    }
    // hago que su proximo sea el que antes era primero
    nuevo->next = prim;

    // hago que el previo del primero anterior sea el nuevo
    prim->prev = nuevo;

    // ahora el primero es el que estoy agregando
    prim = nuevo;
}

void Lista::agregarAtras(const int& elem) {
    Nodo* nuevo = new Nodo(NULL,elem,NULL);
    if (prim == NULL)
    {
        prim = nuevo;
        return;
    }

    Nodo* temp = prim;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    nuevo->prev = temp;
    temp->next = nuevo;
}

void Lista::eliminar(Nat i) {
    Nodo* actual = this->prim;
    for (int j = 0; j < i; j++)
    {
        actual = actual->next;
    }

    // caso donde borro el primero 
    if (i==0)
    {
        //lista con un solo elemento
        if (longitud() == 1)
        {
            this->prim=nullptr;
        }
        //lista con mas de un elemento
        else
        {
            (actual->next)->prev = actual->prev;
            this->prim = this->prim->next;
        }
    }
    //caso borde eliminando el ultimo
    else if (i == longitud() - 1)
    {
        (actual->prev)->next = actual->next;
    }
    //cualquier elemento que no este en los bordes
    else
    {
        (actual->next)->prev=actual->prev;
        (actual->prev)->next=actual->next;
    }
    //borro el elemento en cuestion
    delete actual;
}

int Lista::longitud() const {
    int largo = 0;
    Nodo* temp = prim;
    while (temp != NULL)
    {
        temp = temp->next;
        largo++;
    }
    return largo;
}

const int& Lista::iesimo(Nat i) const {
    Nodo* temp = prim;
    for (int j = 0; j < i; j++)
    {
        temp = temp->next;
    }
    return temp->data;
}

int& Lista::iesimo(Nat i) {
    Nodo* temp = prim;
    for (int j = 0; j < i; j++)
    {
        temp = temp->next;
    }
    return temp->data;
}

void Lista::mostrar(ostream& o) {
    // Completar
}
