#include <vector>
using namespace std;

vector<int>frequencySort(vector<int> input){
    mergeSort(input);
    vector<pair<int,int>> freq;
    vector<int> res;
    // Creo una tupla con el primer elemento del input
    freq.push_back(make_pair(input[0],1));

    // Creo un indice para ir recorriendo freq
    int i = 0;

    for(int e:input) // O(input.size)
    {   
        // Si el valor sigue estando aumento su cantidad de apariciones
        if (e == freq[i].first )
        {
            freq[i] = make_pair(freq[i].first,freq[i].second++);
        }
        
        // Si no creo nueva tupla y actualizo i
        else
        {
            freq.push_back(make_pair(input[0],1));
            i++;
        }
    }
    
    mergeSort(freq); // Ordenando por frecuencia, no por valor.

    // Pongo todas las apariciones en res
    for (int i = 0; i < freq.size(); i++)
    {
        int apariciones = freq[i].second;
        while(apariciones > 0)
        {
            res.push_back(freq[i].first);
            apariciones--;
        }
    }
    
    return res;

}