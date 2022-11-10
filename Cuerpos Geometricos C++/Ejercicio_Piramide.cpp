
#include<iostream>
using namespace std;

int main() {
	float areabase, arealateral, areatotal;
	float h, hcaras, lon;
	float perimetrobase, perimtrobase, volumen;
	int x, lados;
	
	cout << "Este algoritmo fue creado para saber cual es el area lateral, area total y el volumen de una piramide" << endl;
	cout << "------------------------MENU DE OPCIONES------------------------" << endl;
	cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
	cout << "Area Lateral= 1; Area Total= 2; Volumen= 3 " << endl;
	cout << "----------------------------------------------------------------" << endl;
	cin >> x;
	cout << " " << endl;
	switch (x) {
	case 1:
		cout << "PARA CONCER EL AREA LATERAL DE UN CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Cantidad de lados que tiene la base de la piramide:" << endl;
		cin >> lados;
		if ((lados<=0 || lados>4)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "La longitud de uno de los lados de la base: " << endl;
			cin >> lon;
			if ((lon<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese la altura de una de las caras laterales de la piramide: " << endl;
				cin >> hcaras;
				if ((hcaras<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					perimetrobase = lados*lon;
					arealateral = perimetrobase*hcaras/2;
					cout << "El perimetro de la base es: " << perimetrobase << endl;
					cout << "El area lateral de la piramide es de: " << arealateral << endl;
				}
			}
		}
		break;
	case 2:
		cout << "PARA CONCER EL AREA TOTAL DE LA PIRAMIDE INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Area de la base de la piramide: " << endl;
		cout << "Ingrese la longitud de uno de los lados de la base: " << endl;
		cin >> lon;
		if ((lon<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingrese el área lateral de la piramide: " << endl;
			cin >> arealateral;
			if ((arealateral<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				areabase = lon*lon;
				areatotal = areabase+arealateral;
				cout << "El area de la base es: " << areabase << endl;
				cout << "El area total de la piramide es de: " << areatotal << endl;
			}
		}
		break;
	case 3:
		cout << "PARA CONCER EL VOLUMEN DEL CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese la longitud de uno de los lados de la base: " << endl;
		cin >> lon;
		if ((lon<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingrese la altura de la piramide: " << endl;
			cin >> h;
			if ((h<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				volumen = lon*lon*h/3;
				cout << "El volumen de la piramide es de: " << volumen << endl;
			}
		}
		break;
	default:
		cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
	}
	return 0;
}

