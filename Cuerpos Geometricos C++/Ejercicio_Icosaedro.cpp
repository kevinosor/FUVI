
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float area, arista, caras, volumen;
	int x;
	
	cout << "Este algoritmo fue creado para saber cual es el area y el volumen de un icosaedro" << endl;
	cout << "------------------------MENU DE OPCIONES------------------------" << endl;
	cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
	cout << "Area= 1; Volumen= 2 " << endl;
	cout << "----------------------------------------------------------------" << endl;
	cin >> x;
	cout << " " << endl;
	switch (x) {
	case 1:
		cout << "PARA CONCER EL AREA DE UN ICOSAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
		cout << "Ingrese el valor de una arista del icosaedro: " << endl;
		cin >> arista;
		if ((arista<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
			area = 5*1.73*pow(arista,2);
			caras = area/20;
			cout << "El area de cada unas de las caras del icosaedro es de: " << caras << endl;
			cout << "El area del icosaedro es de: " << area << endl;
		}
		break;
	case 2:
		cout << "PARA CONCER EL VOLUMEN UN ICOSAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
		cout << "Ingrese el valor de una arista del icosaedro: " << endl;
		cin >> arista;
		if ((arista<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
			volumen = 0.417*5.24*pow(arista,3);
			cout << "El volumen del icosaedro es de: " << volumen << endl;
		}
		break;
	default:
		cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
	}
	return 0;
}

