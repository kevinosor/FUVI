
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float areabase, arealateral, areatotal;
	float h, r, volumen;
	int x;
	
	cout << "Este algoritmo fue creado para saber cual es el area lateral, area total y el volumen de un cilindro" << endl;
	cout << "------------------------MENU DE OPCIONES------------------------" << endl;
	cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
	cout << "Area Lateral= 1; Area Total= 2; Volumen= 3 " << endl;
	cout << "----------------------------------------------------------------" << endl;
	cin >> x;
	cout << " " << endl;
	switch (x) {
	case 1:
		cout << "PARA CONCER EL AREA LATERAL DEL CILINDRO INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese la altura del cilindro: " << endl;
		cin >> h;
		if ((h<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			if ((h>0)) {
				cout << "Ingrese el radio del cilindro: " << endl;
				cin >> r;
				if ((r<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					arealateral = 2*3.14*h*r;
					cout << "El area lateral del cilindro es de: " << arealateral << endl;
				}
			}
		}
		break;
	case 2:
		cout << "PARA CONCER EL AREA TOTAL DEL CILINDRO INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese el área lateral del cilindro: " << endl;
		cin >> arealateral;
		if ((arealateral<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingresa el radio del cilindro: " << endl;
			cin >> r;
			if ((r<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				areatotal = arealateral+2*(3.14*pow(r,2));
				cout << "El area total del cilindro es de: " << areatotal << endl;
			}
		}
		break;
	case 3:
		cout << "PARA CONCER EL VOLUMEN DEL CILINDRO INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese el valor del radio del cilindro: " << endl;
		cin >> r;
		if ((r<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingrese la altura del cilindro: " << endl;
			cin >> h;
			if ((h<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				volumen = 3.14*pow(r,2)*h;
				cout << "El volumen del cilindro es de: " << volumen << endl;
			}
		}
		break;
	default:
		cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
	}
	return 0;
}

