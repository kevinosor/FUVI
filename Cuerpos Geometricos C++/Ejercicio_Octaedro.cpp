
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float area, arista, caras, volumen;
	int x;
	
	cout << "Este algoritmo fue creado para saber cual es el area y el volumen de un octaedro" << endl;
	cout << "------------------------MENU DE OPCIONES------------------------" << endl;
	cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
	cout << "Area= 1; Volumen= 2 " << endl;
	cout << "----------------------------------------------------------------" << endl;
	cin >> x;
	cout << " " << endl;
	switch (x) {
	case 1:
		cout << "PARA CONCER EL AREA DE UN OCTAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
		cout << "Ingrese el valor de una arista del octaedro: " << endl;
		cin >> arista;
		if ((arista<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
			area = 2*1.73*pow(arista,2);
			caras = area/8;
			cout << "El area de cada unas de las caras del octaedro es de: " << caras << endl;
			cout << "El area del octaedro es de: " << area << endl;
		}
		break;
	case 2:
		cout << "PARA CONCER EL VOLUMEN UN OCTAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
		cout << "Ingrese el valor de una arista del octaedro: " << endl;
		cin >> arista;
		if ((arista<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
			volumen = 0.47*pow(arista,3);
			cout << "El volumen del octaedro es de: " << volumen << endl;
		}
		break;
	default:
		cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
	}
	return 0;
}

