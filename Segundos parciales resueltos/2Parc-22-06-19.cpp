#include <vector>

using namespace std;

/*La idea seria crear buckets de tamanio k, para luego ordenar cada uno de ellos con merge sort. Podemos usar merge sort
  porque la cota que se nos da es nlogk, y sabemos que k esta acotado por n*/

void kSort(vector<int> input, int k){
    
    //Armar los buckets
    vector<vector<int>> buckets(n);    

    int kCount = 0;
    vector<int> bucketActual;

    for (int i = 0; i < input.size(); ++i)
    {
        bucketActual.push_back(input[i]);
        kCount++;

        if (kCount == k)
        {   
            buckets.push_back(bucketActual);
            kCount = 0;
            bucketActual.erase(bucketActual.begin(),bucketActual.begin()+bucketActual.size());
        }
    }
    
   for(vector<int> bucket:buckets){ //O n
        mergeSort(bucket); //O k log k 
   }
    
    vector<int> res;

    for(vector<int> bucket:buckets){
        for (int i = 0; i < bucket.size(); i++)
        {
            res.push_back(bucket[i]);
        }
        
    }

    for (int i = 0; i < res.size(); i++)
    {
        input[i] = res[i];
    }
}

Ordenamiento (inout A: arreglo(nat),k:nat)

	res = crearArreglo(n) //O n
	heap = Arreglo(nat) ← crearArreglo(k)
	ArregloHastaK = A[0,k)
	Array2Heap(ArregloHastaK,heap)

	for int i = 0, i to n , i++ //O n 
		if i + k < n then 
			encolar(a[i + k]),heap) // O log k //Ya que el arreglo siempre tiene tamaño k 
		endif 
		res[i] = desencolar(heap) //O log k
	endfor 

	//O n log k
//La idea es mantener un heap de tamaño k,para luego ir encolando y desencolando a medida que avanzo,Ya que se que luego de i,el menor elemento siguiente
// está a lo sumo a i + k posiciones adelante.Entonces ordeno los primeros k elementos en el heap,Saco el menor,y agrego otro 

QUE LOS CUNPLAAAAS FELIIIII QUE LOS CUNMPLAA FELII EXACTAS .

