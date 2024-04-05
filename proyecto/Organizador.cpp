#include <iostream>
#include "Evento.h"
#include "Organizador.h"
using namespace std;

Organizador::Organizador(){
}
Evento Organizador::generarEvento(string nombre, string tipo, string fecha, int duracion){
    return Evento(nombre, tipo, fecha, duracion);
};

Evento* Organizador::obtenerEvento(string tipo) {
    for (Evento* evento : listaEventos) {
        if (evento->getTipo() == tipo) {
            return evento; // Devuelve un puntero al evento encontrado
        }
    }
    return nullptr; // Si no se encuentra el evento, devuelve nullptr
}

void Organizador::agregarEvento(Evento* evento) {
    listaEventos.push_back(evento);