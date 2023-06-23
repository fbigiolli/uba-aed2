using namespace std;

int maximaCopa(nodo n, int valorAnterior){
    if (n.izq == nullptr or n.der == nullptr)
    {
        return max(maximaCopa(n.izq), maximaCopa(n.der));
    }
    

    if (nodo.valor != valorAnterior)
    { 
        return max(maximaCopa(n.izq), maximaCopa(n.der));
    }

    if (n = nullptr)
    {
        return 0;
    }
    
    return max(1 + maximaCopa(n.izq,valorAnterior),1 + maximaCopa(n.der,valorAnterior));

    COMO ME SALGO DE ESTO???
}


int maximaCopa(nodo n, int copa){
    if(esHoja(n)){
        copa += 1;
        return copa;
    }

    else if(soloHijoDer(n)){
        return max(copa, maximaCopa(n->der, 1));
    }

    else if(soloHijoIzq(n)){
        return max(copa, maximaCopa(n->izq, 1));
    }

    else{ // caso 2 hijos
    
        if(n->der->valor == n->valor and n->izq->valor == n->valor){
            copa += 1;
        }
    }
}
