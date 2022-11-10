
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float areabase, arealateral, areatotal;
	float g, h, r, volumen;
	int x;
	
	cout << "Este algoritmo fue creado para saber cual es el area lateral, area total y el volumen de un cono" << endl;
	cout << "------------------------MENU DE OPCIONES------------------------" << endl;
	cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
	cout << "Area Lateral= 1; Area Total= 2; Volumen= 3 " << endl;
	cout << "----------------------------------------------------------------" << endl;
	cin >> x;
	cout << " " << endl;
	switch (x) {
	case 1:
		cout << "PARA CONCER EL AREA LATERAL DE UN CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese la generatriz del cono: " << endl;
		cin >> g;
		if ((g<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			if ((g>0)) {
				cout << "Ingrese el radio del cono: " << endl;
				cin >> r;
				if ((r<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					arealateral = 3.14*g*r;
					cout << "El area lateral del cono es de: " << arealateral << endl;
				}
			}
		}
		break;
	case 2:
		cout << "PARA CONCER EL AREA TOTAL DEL CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese el área lateral del cono: " << endl;
		cin >> arealateral;
		if ((arealateral<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingresa el radio del cono: " << endl;
			cin >> r;
			if ((r<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				areatotal = arealateral+(3.14*pow(r,2));
				cout << "El area total del cono es de: " << areatotal << endl;
			}
		}
		break;
	case 3:
		cout << "PARA CONCER EL VOLUMEN DEL CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese el valor del radio del cono: " << endl;
		cin >> r;
		if ((r<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingrese la altura del cono: " << endl;
			cin >> h;
			if ((h<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				volumen = 3.14*pow(r,2)*h/3;
				cout << "El volumen del cono es de: " << volumen << endl;
			}
		}
		break;
	default:
		cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
	}
	return 0;
}

