#ifndef avion_h
#define avion_h
#include <iostream>
#include <string>
using namespace std;

class avion {
//atributos
private:
    string modelo;
    int capacidad;
		int pasajeros;
public:
    //constructores
    avion();
    avion(string modelo, int capacidad);
    //setters y getters
    void setModelo(string modelo);
    void setCapacidad(int capacidad);
		void setPasajeros(int pasajeros);
    string getModelo();
    int getCapacidad();
		int getPasajeros();
    void show();
};

//metodos
avion::avion() {
    modelo = "";
    capacidad = 1;
}
avion::avion(string modelo, int capacidad) {
    this->modelo = modelo;
    this->capacidad = capacidad;
}
void avion::setModelo(string modelo) {
    this->modelo = modelo;
}
void avion::setCapacidad(int capacidad) {
    this->capacidad = capacidad;
}
void avion::setPasajeros(int pasajeros) {
		this->pasajeros = pasajeros;
}
string avion::getModelo() {
    return modelo;
}
int avion::getCapacidad() {
    return capacidad;
}
int avion::getPasajeros() {
		return pasajeros;
}
void avion::show() {
    cout << "El modelo es: " << modelo << endl;
		cout << "Los pasajeros son: " << pasajeros << endl;
    cout << "Su capacidad es: " << capacidad << endl;
}




#endif
