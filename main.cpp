#include <iostream> 
#include <string>
#include <fstream>
using namespace std;

#include "FechaHora.h"
#include "avion.h"
#include "compania.h"

//we answered the second question of the project

int main() {
    FechaHora fecha;
    string fechastr;
    string horastr;
    string vuelo;
    char es; //entrada / salida
		compania aerolinea;
		string aerostr;
    string destino;
    string avions;
		avion plane;
    int pasajeros;
    double capacidad;
    double horas[24] = {0}; //contador de vuelos en cada hora //las 24 posiciones son 0
    int AnoAnt = 0; //validar si cambio la fecha
    int mesAnt = 0; //validar si cambio la fecha
    int diaAnt = 0; //validar si cambio la fecha
    int cantDias = 0;
    double promedio;
    bool menu;
    menu = true;
    int answer;
		int cantPas = 0;
		int cantPas2 = 0;
		double dias[31] = {0};
		int dia;
		int capacidadAnt = 0;
		int capacidadTotal = 0;
		double vuelos[] = {0};
		int cantVuelos;
		string vueloAnt = " ";

    while ((menu = true)) {
    cout << "MENU" << endl;
    cout << "1. Hora de cada dia con mayor saturacion." << endl;
    cout << "2. Cantidad de llegadas por hora promedio." << endl;
    cout << "3. Cantidad de salidas por hora promedio." << endl;
    cout << "4. Cantidad de llegadas y salidas por aerolinea." << endl;
    cout << "5. Cantidad de pasajeros por dia." << endl;
    cout << "6. Porcentaje promedio de capacidad en los aviones" << endl;
    cout << "7. PULL SOMETHING OUT OF YOUR ASS IDK" << endl;
    cout << "0. SALIR" << endl;
    cin >> answer;

    ifstream archivo;

      if (answer == 1) {
        //djghkjdfhs
      } // answer 1
      
      else if (answer == 2) {
        //asumiendo que el archivo viene ordenado por dia

        //filtrar por llegadas
        //crear objeto fechahora
        //contar dias en archivo
            //cuando Ano, mes, dia != al renglon anterior
        //sumar llegadas por cada hora
        //dividir llegadas por hora/dias

        archivo.open("datos_vuelos.txt"); 

        while (archivo >> fechastr >> horastr >> vuelo >> es >> aerostr >> destino >> avions >> pasajeros >> capacidad) {
            
            fechastr =  fechastr + " " + horastr;
            fecha = FechaHora(fechastr); 
            
            if (AnoAnt != fecha.getAno() || mesAnt != fecha.getMes() || diaAnt != fecha.getDia()) {
                cantDias++;
                AnoAnt = fecha.getAno();
                mesAnt = fecha.getMes();
                diaAnt = fecha.getDia();
            }
            
            if (es == 'A') {
                horas[fecha.getHora()]++;
            }

        }//while

        archivo.close();

        
          for (int i = 0; i < 24; i++) {
              promedio = horas[i]/cantDias;
              cout << "hora: " << i << " vuelos: " << horas[i] << " promedio: " << promedio << endl;
          }//for
      } //answer 2


      else if (answer == 3) {
        //asumiendo que el archivo viene ordenado por dia

      //filtrar por salidas
      //crear objeto fechahora
      //contar dias en archivo
          //cuando Ano, mes, dia != al renglon anterior
      //sumar salidas por cada hora
      //dividir saidas por hora/dias

				archivo.open("datos_vuelos.txt"); 

				while (archivo >> fechastr >> horastr >> vuelo >> es >> aerostr >> destino >> avions >> pasajeros >> capacidad) {
						
						fechastr =  fechastr + " " + horastr;
						fecha = FechaHora(fechastr);
						
						if (AnoAnt != fecha.getAno() || mesAnt != fecha.getMes() || diaAnt != fecha.getDia()) {
								cantDias++;
								AnoAnt = fecha.getAno();
								mesAnt = fecha.getMes();
								diaAnt = fecha.getDia();
						}
						
						if (es == 'S') {
								horas[fecha.getHora()]++;
						}

				}//while

				archivo.close();

				
					for (int i = 0; i < 24; i++) {
							promedio = horas[i]/cantDias;
							cout << "hora: " << i << " vuelos: " << horas[i] << " promedio: " << promedio << endl;
					}//for
    	} // answer 3

      else if (answer == 4) {
        archivo.open("datos_vuelos.txt");

				while (archivo >> fechastr >> horastr >> vuelo >> es >> aerostr >> destino >> avions >> pasajeros >> capacidad) {
					if (aerostr != aerostr) {
						aerolinea.setNombre(aerostr);
						// somehow add 1 to the airline
						// make a matrix for that airline?????
					}

				} //while
      } // answer 4

      else if (answer == 5) {
				//dia tiene que ser igual
				//sumar los parajeros en cada vuelo
				//imprimir total

        archivo.open("datos_vuelos.txt"); 
				
      	while (archivo >> fechastr >> horastr >> vuelo >> es >> aerostr >> destino >> avions >> pasajeros >> capacidad) {
					 
					fechastr =  fechastr + " " + horastr;
					fecha = FechaHora(fechastr);
					diaAnt = fecha.getDia();
					if (diaAnt == fecha.getDia()) {
						cantPas = cantPas + pasajeros;
						
					}
					else {
						diaAnt = fecha.getDia();
						cantPas2 = cantPas2 + pasajeros;
						
					}

					if (pasajeros > 0) {
								cantPas = cantPas + pasajeros;
						}
				} //while

				archivo.close();

				cout << "dia: " << diaAnt << endl;
				cout << cantPas << endl;

				cout << "dia: " << diaAnt << endl;
				cout << cantPas2 << endl;

      } // answer 5

      else if (answer == 6) {
        //leer las capacidades de todos los aviones 
				// capacidadTotal = capacidadAnt + plane.getCapacidad 
				//sumar todas las capacidades y dividir entre el numero de aviones 
				//multiplicar por 100 para sacar %

				archivo.open("datos_vuelos.txt");

				while (archivo >> fechastr >> horastr >> vuelo >> es >> aerostr >> destino >> avions >> pasajeros >> capacidad) {
					
					if (vueloAnt != vuelo) {
						cantVuelos++;
					}
				}//while
				archivo.close();
				
				cout << "vuelos: " << cantVuelos << endl;
		
				capacidadTotal = capacidadAnt + plane.getCapacidad();
				
				
      } // answer 6

      else if (answer == 7) {
				//diaAnt = fecha.getDia();
				//diaAnt == dia, vuleo++
				/*archivo.open("datos_vuelos.txt");

				while (archivo >> fechastr >> horastr >> vuelo >> es >> aerostr >> destino >> avions >> pasajeros >> capacidad) {
					fechastr = fechastr + horastr;
					fecha = FechaHora(fechastr);
					if (diaAnt != fecha.getDia()) {
						diaAnt = fecha.getDia();
						vuelos[fecha.getDia()]++;
					}

				} //while

				archivo.close();*/
        
				
      } // answer 7

      else {
        cout << "END" << endl;
        return false; //warning???? idk why
      } //else
  } //menu while
    return 0;
} //main 