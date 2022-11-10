// Algoritmo que lea un número entero (altura) y a partir de él, cree una escalera invertida de asteriscos con esa altura.

#include<iostream>
using namespace std;

int main() {
	float alinea, altura, asterisco;
	float asteriscolinea, espacio, espaciolinea;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL IMPRIMIRA UNA ESCALERA DE ASTERISCO INVERTIDA" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado amigo(a) este algoritmo fue creado con fines de diversion, que apartir de un numero se imprimira una escalera de asterisco invertida" << endl;
	cout << "Ahora ingrese un numero: " << endl;
	cin >> altura;
	if ((altura<=1)) {
		cout << "Estimado amigo(a) aunque parezca muy raro este tipo de valor no es valido" << endl;
	} else {
		if ((altura>1)) {
			asterisco = altura;
			espacio = 0;
			for (alinea=1;alinea<=altura;alinea++) {
				for (espaciolinea=0;espaciolinea<=espacio;espaciolinea++) {
					cout << " ";
				}
				for (asteriscolinea=1;asteriscolinea<=asterisco;asteriscolinea++) {
					cout << "*";
				}
				asterisco = asterisco-1;
				espacio = espacio+1;
				cout << " " << endl;
			}
		}
	}
	return 0;
}

