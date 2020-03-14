#ifndef compania_h
#define compania_h
#include <iostream>
#include <string>

using namespace std;

#include "avion.h"

class compania {
//atributos
private:
		string nombre;
    string vuelo;
    avion plane;
public:
    //constructores
    compania();
    compania(string nombre, string vuelo, avion plane);
    //setters y getters
		void setNombre(string nombre);
    void setVuelo(string vuelo);
    void setPlane(avion plane);
		string getNombre();
    string getVuelo();
    avion getPlane();
    void show();
};

//metodos
compania::compania() {
		nombre = "";
    vuelo = "";
    plane = avion();
}
compania::compania(string nombre, string vuelo, avion plane) {
		this->nombre = nombre;
    this->vuelo = vuelo;
    this->plane = plane;
}
void compania::setNombre(string nombre) {
		this->nombre = nombre;
}
void compania::setVuelo(string vuelo) {
    this->vuelo = vuelo;
}
void compania::setPlane(avion plane) {
    this->plane = plane;
}
string compania::getVuelo() {
    return vuelo;
}
avion compania::getPlane() {
    return plane;
}
void compania::show() {
    cout << "compania: " << nombre << "Vuelo: " << vuelo << " es una avion ";
    plane.show();
}

#endif