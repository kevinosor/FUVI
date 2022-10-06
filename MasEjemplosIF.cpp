/*
Nombre del archivo: SumaNumeros.cpp
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
Instrucciones: Más ejemplos de estructuras condicionales IF
*/
#include<iostream>

using namespace std;

int main (){
	int edad;
	char color;
	
	cout << "Ingrese la edad: " <<endl;
	cin >> edad;
	
	if (edad < 17){
		cout << "Ud no tiene la edad suficiente para conducir un vehiculo." <<endl;
	} else {
		cout << "Color de semaforo: (r= rojo, a= amarillo, v= verde)" <<endl;
		cin >> color;
		
		if (color== 'r'){
			cout << "Baje la velocidad hasta detenerse suavemente." <<endl;
		} else if (color== 'a'){
			cout << "Tenga precaucion. No puede avanzar." <<endl;
		}else if (color== 'v'){
			cout << "Siga adelante." <<endl;
		} else {
			cout
		}
	} 
	
	
	
	return 0;
}