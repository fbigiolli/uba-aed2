#include "Lista.h"
#include <cassert>

Lista::Lista() : prim() {
    // Completar
}

Lista::Lista(const Lista& l) : Lista() {
    //Inicializa una lista vacía y luego utiliza operator= para no duplicar el código de la copia de una lista.
    *this = l;
}

Lista::~Lista() {
    Nodo* temp = prim;
    while (temp != NULL)
    {
        Nodo* next = temp->next;
        delete temp;
        temp = next;
    }
    prim = NULL;
}

Lista& Lista::operator=(const Lista& aCopiar) {
    // Completar
    return *this;
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
    Nodo* temp = prim;
    for (int j = 0; j < i; j++)
    {
        temp = temp->next;
    }
    delete temp;
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
