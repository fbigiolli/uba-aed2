#include <vector>
using namespace std;

// En criollo, nos piden un counting sort

void countingSort(vector<int>& input, int k){
    vector<int> count(k);

    for(int n : input) // O(n)
    {
        count[n]++;
    }

    int k = 0;

    int index = 0;

    for (int i = 0; i < count.size() ; i++) // O(k) , o sea, O(1)
    {
        while (count[i] > 0)                // O(n)
        {
            input[index] = count[i];
            index++;
            count[i]--;
        }
    }
}
