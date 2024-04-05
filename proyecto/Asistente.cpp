#include <iostream>
#include "Asistente.h"
using namespace std;

Asistente::Asistente(string nombre, int edad, string ocupacion, string lugar){
    this -> nombre = nombre;
    this -> edad = edad;
    this -> ocupacion = ocupacion;
    this -> lugar = lugar;
}

Asistente::Asistente(){

}

string Asistente::getNombre() const{return nombre;}
int Asistente::getEdad() const{return edad;}
string Asistente::getOcupacion() const{return ocupacion;}
string Asistente::getLugar() const{ return lugar;}

//Funcion syso
void Asistente::printDetalles() const {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Ocupación: " << ocupacion << endl;
    cout << "Lugar: " << lugar << endl;
}
//Fin funcion syso
