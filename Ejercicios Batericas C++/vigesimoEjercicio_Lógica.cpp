// Algoritmo que lea un número entero (lado) y a partir de él, cree un cuadrado de asteriscos con ese tamaño.

#include<iostream>
using namespace std;


int main() {
	float aste, aster;
	float asterisco, espacio;
	int lado;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL IMPRIMIRA UN CUADRADO DE ASTERISCOS APARTIR DE UN NUMERO" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado amigo(a) este algoritmo fue creado con fines de diversion, que apartir de un numero se imprimira un cuadrado de asterisco" << endl;
	cout << "Ahora ingrese un numero: " << endl;
	cin >> lado;
	if ((lado<=2)) {
		cout << "Estimado amigo(a) aunque parezca muy raro este tipo de valor no es valido" << endl;
	} else {
		if ((lado>2)) {
			for (aster=1;aster<=lado;aster++) {
				cout << "*";
			}
			cout << "*" << endl;
			for (aste=1;aste<=lado-2;aste++) {
				cout << "*";
				for (espacio=1;espacio<=lado-2;espacio++) {
					cout << "*";
				}
				cout << "*";
				cout << "*" << endl;
			}
			for (asterisco=1;asterisco<=lado;asterisco++) {
				cout << "*";
			}
		}
	}
	return 0;
}

