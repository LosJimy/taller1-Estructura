#include <string>
#include <vector>
#include "Asistente.h" //según lo leido, es .h, ya que así se mantiene la convención estándar.
#include "Evento.h"

Evento::Evento(string nombre,string tipo,string fecha, int duracion) {
    this -> nombre = nombre;
    this -> tipo = tipo;
    this -> fecha = fecha;
    this -> duracion = duracion;
}

string Evento::getNombre() const {return nombre;}
string Evento::getTipo() const {return tipo;}
string Evento::getFecha() const {return fecha;}
int Evento::getDuracion() const {return duracion;}