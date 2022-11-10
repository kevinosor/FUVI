
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float arealateral, areamayor, areamenor, areatotal;
	float g, h, r;
	float rmayor, volumen;
	int x;
	
	cout << "Este algoritmo fue creado para saber cual es el area lateral, area total y el volumen de un tronco de cono" << endl;
	cout << "------------------------MENU DE OPCIONES------------------------" << endl;
	cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
	cout << "Area Lateral= 1; Area Total= 2; Volumen= 3 " << endl;
	cout << "----------------------------------------------------------------" << endl;
	cin >> x;
	cout << " " << endl;
	switch (x) {
	case 1:
		cout << "PARA CONCER EL AREA LATERAL DE UN TRONCO DE CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese la generatriz del tronco de cono: " << endl;
		cin >> g;
		if ((g<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingrese el valor del radio menor del tronco de cono: " << endl;
			cin >> r;
			if ((r<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el valor del radio mayor del tronco de cono: " << endl;
				cin >> rmayor;
				if ((rmayor<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					arealateral = 3.14*g*(rmayor+r);
					cout << "El area lateral del tronco de cono es de: " << arealateral << endl;
				}
			}
		}
		break;
	case 2:
		cout << "PARA CONCER EL AREA TOTAL DEL TRONCO DE CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese el área lateral del tronco de cono: " << endl;
		cin >> arealateral;
		if ((arealateral<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingresa el valor del radio menor del tronco de cono: " << endl;
			cin >> r;
			if ((r<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el valor del  radio mayor del tronco de cono: " << endl;
				cin >> rmayor;
				if ((rmayor<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					areamenor = 3.14*pow(r,2);
					areamayor = 3.14*pow(rmayor,2);
					areatotal = arealateral+areamenor+areamayor;
					cout << "El area total del tronco de cono es de: " << areatotal << endl;
				}
			}
		}
		break;
	case 3:
		cout << "PARA CONCER EL VOLUMEN DEL TRONCO DE CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese el valor del radio menor del tronco de  cono: " << endl;
		cin >> r;
		if ((r<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingrese el valor del radio mayor del tronco de cono: " << endl;
			cin >> rmayor;
			if ((rmayor<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese la altura del tronco de cono: " << endl;
				cin >> h;
				if ((h<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					volumen = 3.14*h*(pow(rmayor,2)+pow(r,2)+rmayor+r)/3;
					cout << "El volumen del tronco de cono es de: " << volumen << endl;
				}
			}
		}
		break;
	default:
		cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
	}
	return 0;
}

