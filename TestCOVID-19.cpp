/*
Nombre del archivo: testCOVID.cpp
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
Instrucciones: Más ejemplos con estructuras condicionales
El programa le va a pedir al usuario que sintomas tiene, y en base a eso se le va a diagnosticar si tiene o no COVID-19
*/
#include<iostream>
#include<string>

using namespace std;

int main (){
	double edad;
	string nombre, apellido;
	bool respuesta
	
	cout << "-----Bienvenido a este test virtual en donde sabra si usted tiene COVID o no, por favor ingrese los siguientes datos-----" <<endl;
	cout << "Ingrese su primer nombre" <<endl;
	cin >> nombre;
	cout << "Ingrese su primer apellido" <<endl;
	cin >> apellido;
	cout << "Ingrese su edad" <<endl;
	cin >> edad;
	cout<< "-----Bienvenido " <<nombre << apellido << ", por favor responda las siguientes preguntas-----" <<endl;
	
	cout << "Para responder las preguntas ingrese 1 para si y 0 para no" <<endl;



	cout << "¿Ud ha cumplido con las normas de prevencion contra el COVID-10?" <<endl;
	cin >> respuesta
	return 0;
}