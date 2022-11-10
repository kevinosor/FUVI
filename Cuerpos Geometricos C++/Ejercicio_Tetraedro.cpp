
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float altura, area, arista;
	float caras, volumen;
	int x;
	
	cout << "Este algoritmo fue creado para saber cual es el area, volumen y altura de un tetraedro" << endl;
	cout << "------------------------MENU DE OPCIONES------------------------" << endl;
	cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
	cout << "Area= 1; Volumen= 2; Altura=3 " << endl;
	cout << "----------------------------------------------------------------" << endl;
	cin >> x;
	cout << " " << endl;
	switch (x) {
	case 1:
		cout << "PARA CONCER EL AREA DE UN TETRAEDRP INGRESE EL SIGUIENTE DATO: " << endl;
		cout << "Ingrese el valor de una arista del tetraedro: " << endl;
		cin >> arista;
		if ((arista<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
			area = 1.73*pow(arista,2);
			caras = area/3;
			cout << "El area de cada unas de las caras del tetraedro es de: " << caras << endl;
			cout << "El area del tetraedro es de: " << area << endl;
		}
		break;
	case 2:
		cout << "PARA CONCER EL VOLUMEN UN TETRAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
		cout << "Ingrese el valor de una arista del tetraedro: " << endl;
		cin >> arista;
		if ((arista<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
			volumen = 0.12*pow(arista,3);
			cout << "El volumen del tetraedro es de: " << volumen << endl;
		}
		break;
	case 3:
		cout << "PARA CONCER LA ALTURA DE UN TETRAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
		cout << "Ingrese el valor de una arista del tetraedro: " << endl;
		cin >> arista;
		if ((arista<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
			altura = arista*0.81;
			cout << "La altura del tetraedro es de: " << altura << endl;
		}
		break;
	default:
		cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
	}
	return 0;
}

