/*
Nombre del archivo: constantes.cpp
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
Instrucciones: Ejemplo de la estructura WHILE, adivinanzas
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	srand(time(nullptr));
	int aleatorio= rand () %10;
	int num;
	
	cout << aleatorio; 
	cout << "Adivine un numero ente 0 y 10" <<endl;
	cin >> num;
	
	while (num != aleatorio){
		cout << "Adivine un numero entre 0 y 10" <<endl;
		cin >> num;
	}
	cout << "Felicidadas has acertado" <<endl;
	
	return 0;
}