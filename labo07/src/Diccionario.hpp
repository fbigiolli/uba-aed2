#include<cassert>
#include<vector>

using namespace std;

template<class Clave, class Valor>
class Diccionario {
public:
	Diccionario();
	void definir(Clave k, Valor v);
	bool def(Clave k) const;
	Valor obtener(Clave k) const;
    vector<Clave> claves() const;

private:
	struct Asociacion {
		Asociacion(Clave k, Valor v);
		Clave clave;
		Valor valor;
	};
	std::vector<Asociacion> _asociaciones;
};

template<class Clave, class Valor>
Diccionario<Clave,Valor>::Diccionario(){};

template<class Clave, class Valor>
Diccionario<Clave,Valor>::Asociacion::Asociacion(Clave k, Valor v): clave(k), valor(v) {}

template<class Clave, class Valor>
void Diccionario<Clave,Valor>::definir(Clave k, Valor v) {
	for (unsigned int i = 0; i < _asociaciones.size(); i++) {
		if (_asociaciones[i].clave == k) {
			_asociaciones[i].valor = v;
			return;
		}
	}
	_asociaciones.push_back(Asociacion(k, v));
}

template<class Clave, class Valor>
bool Diccionario<Clave,Valor>::def(Clave k) const {
	for (unsigned int i = 0; i < _asociaciones.size(); i++) {
		if (_asociaciones[i].clave == k) {
			return true;
		}
	}
	return false;
}

template<class Clave, class Valor>
Valor Diccionario<Clave,Valor>::obtener(Clave k) const {
	for (unsigned int i = 0; i < _asociaciones.size(); i++) {
		if (_asociaciones[i].clave == k) {
			return _asociaciones[i].valor;
		}
	}
	assert(false);
}

template<class Clave, class Valor>
vector<Clave> Diccionario<Clave,Valor>::claves() const{
    vector<Clave> claves;
    for (int i = 0; i < _asociaciones.size(); i++)
    {
        claves.push_back(_asociaciones[i].clave);
    }
    sort(claves.begin(),claves.end());
    return claves;    
}