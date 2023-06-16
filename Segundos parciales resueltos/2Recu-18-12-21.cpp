#include <vector>

using namespace std;

/* En primer lugar, ordenamos por cantidad de regalos pedidos. Para aquellos que pidieron mas de 3n, sabemos que 
   su cantidad esta acotada por 1000. Por lo tanto, podemos usar cualquier algoritmo de ordenamiento dado que su tiempo 
   de ejecucion no dependera del tam de la entrada, si no que sera constante. Luego nos quedan ordenar aquellos que pidieron
   menos de 3n. Como la cantidad de regalos esta acotada, podemos hacer un bucketsort con ellos. 
   Luego tenemos que organizar los pedidos por zona horaria, que es el primer elemento de la tupla.
   Para ello se nos da una cota de complejidad maxima de O(z), y como sabemos que estan acotadas, podemos hacer 
   bucket sort para cumplir con ella. */
   