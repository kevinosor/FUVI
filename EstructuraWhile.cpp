/*
Nombre del archivo: constantes.cpp
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
Instrucciones: Ejemplo de la estructura WHILE
*/
#include <iostream>

using namespace std;

int main (){
	int edad;
	string nombre;
	cout << "Ingrese su nombre: " <<endl;
	cin >> nombre;
	cout << "Ingrese su edad: " <<endl;
	cin >> edad;
	
	while (edad < 0){
		cout <<"Ingrese su edad: ";
		cin >> edad;
	}
	cout << "Bienvenido, " << nombre << endl;
	cout << "Fin de la aplicacion.";
	
	return 0;
}