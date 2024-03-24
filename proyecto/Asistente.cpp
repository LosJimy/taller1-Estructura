#ifndef ASISTENTE_H
#define ASISTENTE_H

#include <string>
#include <iostream>

class Asistente{
private:
    std::string nombre;
    int edad;
    std::string ocupacion;
    std::string lugar;

public:

    //Constructor
    Asistente(std::string nombre, int edad, std::string ocupacion, std::string lugar);

    //Funciones getter
    std::string getNombre() const {return nombre;}
    int getEdad() const {return edad;}
    std::string getOcupacion() const {return ocupacion;}
    std::string getLugar() const{return lugar;}
    //Fin funciones getter

    //Funcion syso
    void printDetalles() const{
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Ocupación: " << ocupacion << std::endl;
        std::cout << "Lugar: " << lugar << std::endl; //Buscar una mejor manera para referirse al lugar xd
    }
    //Fin funcion syso

};

#endif // ASISTENTE_H