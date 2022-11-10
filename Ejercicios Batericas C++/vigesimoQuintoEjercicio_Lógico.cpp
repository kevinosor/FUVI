// Crear un algoritmo que convierta de °C a °F o viceversa una temperatura ingresada por el usuario. De antemano, 
// se le debe preguntar al usuario de qué sistema a qué sistema desea convertir.

#include<iostream>
using namespace std;

int main() {
	float c, celsius;
	float f, fahrenheit;
	int tipoconversion;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL HARA UNA CONVERSION DE C - F Y F - C" << endl;
	cout << "--------------------------------" << endl;
	celsius = 1;
	fahrenheit = 2;
	cout << "Estimado estudiante, indiquenos que conversion desea hacer:" << endl;
	cout << "---------------MENU DE OPCIONES---------------" << endl;
	cout << "Para pasar de C a F= 1; Para pasar de F a C= 2" << endl;
	cout << "----------------------------------------------" << endl;
	cin >> tipoconversion;
	if ((tipoconversion<=0 || tipoconversion>=3)) {
		cout << "ERROS, VUELVA A INTENTARLO NUEVAMENTE" << endl;
	} else {
		if ((tipoconversion==1)) {
			cout << "Estimado usuario ingrese los grados celsius que desesa convertir" << endl;
			cin >> c;
			f = (c*(9/5))+32;
			cout << "Lo grados celsius convertidos a grados fahrenheit es de: °" << f << endl;
		} else {
			if ((tipoconversion==2)) {
				cout << "Estimado usuario ingrese los grados fahrenheit" << endl;
				cin >> f;
				c = 5/9*(f-32);
				cout << "Lo grados celsius convertidos a grados fahrenheit es de: °" << c << endl;
			}
		}
	}
	return 0;
}

