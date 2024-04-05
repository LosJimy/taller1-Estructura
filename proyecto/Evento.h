#pragma once
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Evento {
private:
    string nombre;
    string tipo;
    string fecha;
    int duracion;
    vector<string> asistentes; // Usamos un vector para almacenar los nombres de los asistentes

public:
    Evento(string nombre, string tipo, string fecha, int duracion)
        : nombre(nombre), tipo(tipo), fecha(fecha), duracion(duracion) {}

    // Métodos para gestionar asistentes
    void registrarAsistente(const std::string& nombreAsistente) {
        asistentes.push_back(nombreAsistente);
    }

    void listarAsistentes() const {
        cout << "Asistentes al evento '" << nombre << "':" << endl;
        for (const auto& asistente : asistentes) {
            cout << "- " << asistente << endl;
        }
    }

    //Metodos Getter 
    string getNombre() const;
        string getTipo() const;
        string getFecha() const;
        int getDuracion() const;

    // Funciones para cargar/guardar datos en archivo (persistencia)
    void guardarEnArchivo(const string& nombreArchivo) const {
        ofstream archivo(nombreArchivo);
        if (archivo.is_open()) {
            archivo << "Nombre del evento: " << nombre << endl;
            archivo << "Tipo: " << tipo << endl;
            archivo << "Fecha: " << fecha << endl;
            archivo << "Asistentes:" << endl;
            for (const auto& asistente : asistentes) {
                archivo << "- " << asistente << endl;
            }
            archivo.close();
            cout << "Datos guardados en '" << nombreArchivo << "'" << endl;
        } else {
            cerr << "Error al abrir el archivo para escritura." << endl;
        }
    }
};