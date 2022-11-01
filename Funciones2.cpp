/*
Nombre del archivo: constantes.cpp
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria

*/
#include<iostream>
using namespace std;

double sumarNumeros(double a, double b);
int main (){
	double suma, a=15.0, b=8.5;
	
	suma= sumarNumeros (a,b);
	cout << "La suma de " << a << " + " << b << " es: " <<suma <<endl;
	
	return 0;
}
double sumarNumeros(double a, double b){
	double resultado;
	resultado= a + b;
	return resultado;
}	


