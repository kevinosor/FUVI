/*
Nombre del archivo: constantes.cpp
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
*/
#include<iostream>
#include<cmath>

using namespace std;
const double pi= 3.141592;

int main (){
	
double radio, area;
cout <<"Ingrese el radio del circulo: ";
cin>> radio;
area= pi * pow(radio,2);
cout<< "El área de un circulo con radio " <<radio << "es " <<area;
	
	return 0;
}