#include <iostream>
#include "Evento.h"
#include "Organizador.h"
#include "Asistente.h"
using namespace std;

int main(){

    Organizador organizador;
    Asistente asistente;

    string nombreEvento;
    string tipoEvento;
    string fechaEvento;
    int duracionEvento;

    string nombreAsistente;
    int edadAsistente;
    string ocupacionAsistente;
    string lugarAsistente;

    while(true){
        cout << "=====BIENVENIDO=====" << endl;
        cout << "1. Crear Evento" << endl;
        cout << "2. Registrar Asistentes" << endl;
        cout << "3. Consultar lista de Asistentes" << endl;
        cout << "4. Generar Informe" << endl;
        cout << "5. SALIR" << endl;
        cout << "Ingrese Opción: ";

        int respuesta = -1;
        cin>>respuesta;

        switch (respuesta){
            case 1:
                cout << "=====CREAR EVENTO=====" << endl;
                cout << "Ingrese nombre del evento: ";
                cin >> nombreEvento;
                cout << endl;

                cout << "Ingrese tipo de evento: ";
                cin >> tipoEvento;
                cout << endl;

                cout << "Ingrese fecha del evento: ";
                cin >> fechaEvento;
                cout << endl;

                cout << "Ingrese duracion del evento: ";
                cin >> duracionEvento;
                cout << endl;

                organizador.generarEvento(nombreEvento,tipoEvento,fechaEvento,duracionEvento);
                guardarEventos(organizador, "eventos.txt");
                break;
            case 2:
                cout << "=====REGISTRAR ASISTENTES=====" << endl;
                cout << "Ingrese nombre del asistente: ";
                cin >> nombreAsistente;
                cout << endl;
                
                cout << "Ingrese edad del asistente: ";
                cin >> edadAsistente;
                cout << endl;

                cout << "Ingrese ocupación del asistente: ";
                cin >> ocupacionAsistente;
                cout << endl;
                
                cout << "Ingrese lugar del asistente: ";
                cin >> lugarAsistente;
                cout << endl;
                
                asistente = Asistente(nombreAsistente, edadAsistente, ocupacionAsistente, lugarAsistente);
                guardarAsistentes("asistentes.txt", asistente);
                break;
            case 3:
                cout << "=====CONSULTAR LISTA DE ASISTENTES=====";
                break;
            case 4:
                cout << "=====GENERAR INFORME=====";
                break;
            case 5:
                cout << "=====HASTAL LUEGO=====";
                break;
            default:
                cout << "Ingrese una opción valida";
                break;
        }
    }
}

void guardarEventos(const Organizador& organizador, const string& nombreArchivo){
    ofstream archivo(nombreArchivo);
    if(archivo.is_open()){
        for(const Evento* evento : organizador.obtenerListaEventos()){
            archivo << evento->getNombre() << "," << evento->getTipo() << ";" << evento->getFecha()
            << "," << evento->getDuracion() << "\n";
        }
        archivo.close();
        cout << "Eventos guardados correctamente en " << nombreArchivo << endl;
    } else{
        cerr << "Error al abrir el archivo " << nombreArchivo << endl;
    }
}

void guardarAsistentes(const string& nombreArchivo, const Asistente& asistente){
    ofstream archivo(nombreArchivo);

    if(archivo.is_open()){
        archivo << asistente.getNombre() << "," << asistente.getEdad() << "," << asistente.getOcupacion() << "," << asistente.getLugar() << "\n";
    
        archivo.close();
        cout << "Asistentes guardados en ´" << nombreArchivo << "´." << endl;
    }else{
        cerr << "Error al abrir el archivo ´" << nombreArchivo << "´." << endl;
    }
}