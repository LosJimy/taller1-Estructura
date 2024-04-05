#pragma once
#include <iostream>
using namespace std;

class Asistente{
    private:
        string nombre;
        int edad;
        string ocupacion;
        string lugar;
public:

    //Constructor
    Asistente(string nombre, int edad, string ocupacion, string lugar);

    //Constructor pred.
    Asistente();

    //Funciones getter
    string getNombre() const;
    int getEdad() const;
    string getOcupacion() const;
    string getLugar() const;
    void printDetalles() const;
    //Fin funciones getter

    //Funcion syso
void printDetalles() const;
//Fin funcion syso

};