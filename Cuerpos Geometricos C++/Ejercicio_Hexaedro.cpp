
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float area, arista, caras;
	float diagonal, volumen;
	int x;
	
	cout << "Este algoritmo fue creado para saber cual es el area, volumen y diagonal de un hexaedro" << endl;
	cout << "------------------------MENU DE OPCIONES------------------------" << endl;
	cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
	cout << "Area= 1; Volumen= 2; Diametro: 3" << endl;
	cout << "----------------------------------------------------------------" << endl;
	cin >> x;
	cout << " " << endl;
	switch (x) {
	case 1:
		cout << "PARA CONCER EL AREA DE UN HEXAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
		cout << "Ingrese el valor de una arista del hexaedro: " << endl;
		cin >> arista;
		if ((arista<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			area = 6*pow(arista,2);
			caras = area/6;
			cout << "El area de cada unas de las caras del hexaedro es de: " << caras << endl;
			cout << "El area del hexaedro es de: " << area << endl;
		}
		break;
	case 2:
		cout << "PARA CONCER EL VOLUMEN UN HEXAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
		cout << "Ingrese el valor de una arista del hexaedro: " << endl;
		cin >> arista;
		if ((arista<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			volumen = pow(arista,3);
			cout << "El volumen del hexaedro es de: " << volumen << endl;
		}
		break;
	case 3:
		cout << "PARA CONCER LA DIAGONAL DE UN HEXAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
		cout << "Ingrese el valor de una arista del hexaedro: " << endl;
		cin >> arista;
		if ((arista<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			diagonal = arista*1.73;
			cout << "La diagonal del hexaedro es de: " << diagonal << endl;
		}
		break;
	default:
		cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
	}
	return 0;
}

