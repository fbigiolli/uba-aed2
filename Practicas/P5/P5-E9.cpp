#include <string>
#include <vector>
typedef unsigned int uint;
using namespace std;

enum Genero { fem, masc };

struct Alumno
{
    string nombre;
    Genero GEN;
    uint nota;
};


/* Idea: Separar en dos vectores distintos fem y masc, para ello recorro toda la planilla (O(P)), luego ordenar ambos vectores por nota
 y finalmente juntarlos*/

void planillaSort(vector<Alumno> planilla){

    vector<Alumno> mascs;
    vector<Alumno> fems;

    for (Alumno a:planilla) // O(P)
    {
        if (a.GEN == masc)
        {
            mascs.push_back(a);
        }

        else
        {
            fems.push_back(a);
        }
    }
    
    // Counting sort modificado, en vez de guardar en cada posicion solamente cantidad guardo los alumnos que tienen esa nota, y despues los meto al vector original.
    countingSort(mascs);
    countingSort(fems);

    for (int i = 0; i < fems.size(); i++)   //O(n)
    {
        planilla[i] = fems[i];
    }

    int femsSize = fems.size();

    for (int i = 0; i < mascs.size(); i++)  //O(n)
    {
        planilla[i+femsSize] = mascs[i];
    }
        
    // Ambos for son O(n) ya que el peor caso posible es el que son todos mujeres o todos hombres.
}

// sharau para chatgpt por el counting sort :) (no lo chequie)

void countingSort(vector<Alumno>& alumnos) {
    const int maxNota = 10;  // El rango de notas es del 1 al 10
    vector<vector<Alumno>> count(maxNota + 1);  // Vector de vectores para contar los alumnos por nota

    // Contar la cantidad de alumnos por nota
    for (const auto& alumno : alumnos) {
        count[alumno.nota].push_back(alumno);
    }

    // Juntar los alumnos en el vector original en orden ascendente de nota
    int index = 0;
    for (const auto& nota : count) {
        for (const auto& alumno : nota) {
            alumnos[index++] = alumno;
        }
    }
}
