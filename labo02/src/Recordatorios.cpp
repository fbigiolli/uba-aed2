#include <iostream>
#include <list>

using namespace std;

using uint = unsigned int;

// Pre: 0 <= mes < 12
uint dias_en_mes(uint mes) {
    uint dias[] = {
        // ene, feb, mar, abr, may, jun
        31, 28, 31, 30, 31, 30,
        // jul, ago, sep, oct, nov, dic
        31, 31, 30, 31, 30, 31
    };
    return dias[mes - 1];
}

// Ejercicio 7, 8, 9 y 10

// Clase Fecha
class Fecha {
  public:
    Fecha(int mes, int dia);
    int mes();
    int dia();
    string toString();
    void incrementar_dia();
    #if EJ >= 9 // Para ejercicio 9
    bool operator==(Fecha o);
    #endif

  private:
    int _mes;
    int _dia;
};

Fecha::Fecha(int mes, int dia) : _mes(mes), _dia(dia){}

int Fecha::mes(){
  return _mes;
}

int Fecha::dia(){
  return _dia;
}


string Fecha::toString() {
    return to_string(_dia) + "/" + to_string(_mes);
}

ostream &operator<<(ostream &os, Fecha f){
  os << f.dia() << "/" << f.mes();
  return os;
}

#if EJ >= 9
bool Fecha::operator==(Fecha o) {
    bool igual_dia = this->dia() == o.dia() && this->mes() == o.mes();
    return igual_dia;
}
#endif

void Fecha::incrementar_dia(){
  _dia++;
  if(_dia > dias_en_mes(_mes)){
    _dia = 1;
    _mes++;
    if(_mes>12) _mes = 1;
  }
}

// Ejercicio 11, 12

class Horario{
  public:
  Horario(int hora, int min);
  int hora();
  int min();
  bool operator==(Horario h);
  bool operator<(Horario h);

  private:
  int _hora;
  int _min;
};

Horario::Horario(int hora, int min) : _hora(hora), _min(min) {}

int Horario::hora(){
  return _hora;
}

int Horario::min(){
  return _min;
}

bool Horario::operator==(Horario h){
  return _hora == h.hora() && _min == h.min();
}

bool Horario::operator<(Horario h){
  return _hora < h.hora() || (_hora == h.hora() and _min < h.min()); 
}

ostream &operator<<(ostream &os, Horario h){
  os << h.hora() << ":" << h.min();
  return os;
}

// Ejercicio 13
class Recordatorio{
  public:
  Recordatorio(Fecha fecha, Horario horario, string mensaje);
  Fecha fecha();
  Horario horario();
  string mensaje();

  private:
  Fecha _fecha;
  Horario _horario;
  string _mensaje;
};

Recordatorio::Recordatorio(Fecha fecha, Horario horario, string mensaje) : _fecha(fecha), _horario(horario), _mensaje(mensaje) {}

Fecha Recordatorio::fecha(){
  return _fecha;
}

Horario Recordatorio::horario(){
  return _horario;
}

string Recordatorio::mensaje(){
  return _mensaje;
}

ostream &operator<<(ostream &os, Recordatorio r){
  os << r.mensaje() << " @ " << r.fecha() << " " << r.horario();
  return os;
}

// Ejercicio 14

class Agenda {
public:
    Agenda(Fecha fecha_inicial);

    void agregar_recordatorio(Recordatorio r);

    void incrementar_dia();

    list<Recordatorio> recordatorios_de_hoy();

    Fecha hoy();

private:
    Fecha _hoy;
    map<string, list<Recordatorio>> _recordatorios;
};

Agenda::Agenda(Fecha fecha_inicial) : _hoy(fecha_inicial) {}

void Agenda::agregar_recordatorio(Recordatorio r) {
    auto rs = _recordatorios[r.fecha().toString()];
    auto o = rs.begin();
    while (o != rs.end()) {
        if (r.horario() < o->horario()) {
            rs.insert(o, r);
            break;
        }
        o++;
    }
    if (o == rs.end()) rs.push_back(r);
    _recordatorios[r.fecha().toString()] = rs;
}

void Agenda::incrementar_dia() {
    _hoy.incrementar_dia();
}

list<Recordatorio> Agenda::recordatorios_de_hoy() {
    return _recordatorios[_hoy.toString()];
}

Fecha Agenda::hoy() {
    return _hoy;
}

ostream &operator<<(ostream &os, Agenda a) {
    os << a.hoy() << endl;
    os << "=====" << endl;
    for (Recordatorio r: a.recordatorios_de_hoy()) {
        os << r << endl;
    }
    return os;
}