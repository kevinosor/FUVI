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
	srand(time(nullptr)); //seed random
	int valorMin= 1, valorMax=6;
	
	//Formula para generar numeros dentro de un rango
	short dado1= (rand() % (valorMax - valorMin + 1)) + valorMin;
	short dado2= (rand() % (valorMax - valorMin + 1)) + valorMin;
	
	cout << dado1 <<" , " << dado2;
	return 0;
	}