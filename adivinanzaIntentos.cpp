/*
Nombre del archivo: constantes.cpp
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
Instrucciones: Ejemplo de la estructura WHILE, adivinanzas con intentos.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	srand(time(nullptr));
	int aleatorio= rand () %10;
	int num, intento=1;
	
	do{
	 cout << "Adivine un numero ente 0 y 10" <<endl;
	 cin >> num;
	 if (num == aleatorio){
	 	cout << "Felicidades has acertado" <<endl;
	 	intento= 4;
	 } else {
	 	cout << "Numero incorrecto" <<endl;
	 	if (intento == 3){
		  cout << "Ud ha agotado todos sus intentos" <<endl;
		 }
		 intento ++;
	 }
	} while (intento < 4);
	
	cout << "El numero ganador " <<endl;
	cout << "FIN DE LA APLICACION" <<endl;
	
	return 0;
}