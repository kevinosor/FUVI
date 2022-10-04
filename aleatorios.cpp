/*
Nombre del archivo: aleatorios.cpp
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
Instrucciones: Generar numeros aleatorios
*/
#include<iostream>
#include<cstdlib> //C standard library
#include<ctime>

using namespace std;

int main (){
	//long tiempoTranscurrido= time(nullptr); // 1 enero 1970
	srand(time(nullptr)); //seed random
	int aleatorio= rand () % 10;
	int num;
	
	cout << "Adivina un número entre 0 y 10";
	cin >> num;
	
	if (num==aleatorio){
		cout<< "Felicidades, acerto";
	} else {
		cout<< "Lo siento, no acertaste";
	}
	
	cout<< aleatorio;
	
	return 0;
}
