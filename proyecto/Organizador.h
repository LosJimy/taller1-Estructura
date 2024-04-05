    #pragma once
    #include <iostream>
    #include "Evento.h"
    #include <vector>
    using namespace std;

    class Organizador{
        private:
            vector<Evento*> listaEventos; // Vector de punteros a Evento
        public:
            Organizador();
            Evento generarEvento(string nombre, string tipo, string fecha, int duracion);
            Evento* obtenerEvento(string tipo);

            void agregarEvento(Evento* evento);

            const vector<Evento*>& obtenerListaEventos() const{
                return listaEventos;
            }
    };