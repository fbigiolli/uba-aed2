#include <vector>

using namespace std;

bool contienePosicionIgualAIndice(vector<int> input, int begin, int end){
    if(end-begin == 1 and input[(end+begin)/2] == begin+1)          // O(1)
        return true;
    else if(end-begin == 1 and input[(end+begin)/2] != begin+1)     // O(1)
        return false;

    else{
        if(input[((end+begin)/2) - 1] >= (end+begin)/2)             // O(1)
            return contienePosicionIgualAIndice(input, begin, (end+begin)/2);   // T(N/2)
        else
            return contienePosicionIgualAIndice(input, (end+begin)/2, end);     // T(N/2)
    }
}

// Tengo 1 subproblema, por lo tanto a=1, c=2, estoy en el segundo caso del teorema maestro, me queda complejidad log(n)
// La idea es hacer una busqueda binaria con una breve modificacion.