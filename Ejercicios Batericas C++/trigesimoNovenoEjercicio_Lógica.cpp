// Suponga que usted es un ejecutivo de una microfinanciera, encargado de entregar créditos a las personas. De acuerdo a las reglas del banco para el que usted trabaja 
// el monto del crédito al que una persona puede acceder depende de su sueldo. Para determinar el crédito al que una persona puede optar, debe utilizar 
// la siguiente tabla entregada por el banco: Rangos de sueldos Monto de derecho a crédito Sueldo menor a C$200,000 C$0; Sueldo entre C$200,000 y C$500,000 C$500,000
// Sueldo entre C$500,000 y C$1,000,000 C$2,000,000. Escriba un algoritmo que, dado el sueldo de un cliente, le indique el valor del crédito al que puede optar.

#include<iostream>
using namespace std;

int main() {
	int edad;
	string nombre;
	int salario;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL NOS DIRA SI NOS OTORGA UN CREDITO DEPENDIENDO DE NUESTRO SALARIO" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado(a) cliente para acceder a un credito ingrese los siguientes datos: " << endl;
	cout << "Ingrese su primer nombre y apellido: " << endl;
	cin >> nombre;
	cout << "Ingrese su edad: " << endl;
	cin >> edad;
	if ((edad<22)) {
		cout << "Lo sentiemos, no cuenta con la edad suficiente para recibir un credito." << endl;
	} else {
		if ((edad>=22)) {
			cout << "Ingrese su salario mensual: " << endl;
			cin >> salario;
			if ((salario<=0)) {
				cout << "TIPO DE DATOS NO ADMITIDO, INTENTELO NUEVAMENTE" << endl;
			} else {
				if ((salario<200000)) {
					cout << "Estimado(a) cliente " << nombre << " al tener un sueldo menor a lo solicitado no se le podra otorgar un credito." << endl;
				} else {
					if ((salario>=200000 && salario<500000)) {
						cout << "Estimado(a) cliente " << nombre << " al tener un salario de: " << salario << endl;
						cout << "Le otorgaremos un credito de: C$500,000" << endl;
					} else {
						if ((salario>=500000 && salario<1000000)) {
							cout << "Estimado(a) cliente " << nombre << " al tener un salario de: " << salario << endl;
							cout << "Le otorgaremos un credito de: C$2,000,000" << endl;
						}
					}
				}
			}
		}
	}
	return 0;
}

