
#include<iostream>
using namespace std;

int main() {
	float arealateral, areamayor, areamenor, areatotal, h;
	float lonmayor, lonmenor, perimay, perimen;
	float pmayor, pmenor, volumen;
	int x;
	
	cout << "Este algoritmo fue creado para saber cual es el area lateral, area total y el volumen de un tronco de piramide" << endl;
	cout << "------------------------MENU DE OPCIONES------------------------" << endl;
	cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
	cout << "Area Lateral= 1; Area Total= 2; Volumen= 3 " << endl;
	cout << "----------------------------------------------------------------" << endl;
	cin >> x;
	cout << " " << endl;
	switch (x) {
	case 1:
		cout << "PARA CONCER EL AREA LATERAL DEL TRONCO DE PIRAMIDE INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese el perimetro menor del tronco de piramide: " << endl;
		cin >> pmenor;
		if ((pmenor<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingrese el valor del perimetro mayor del tronco de piramide: " << endl;
			cin >> pmayor;
			if ((pmayor<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese la altura del tronco de piramide: " << endl;
				cin >> h;
				if ((h<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					perimen = pmenor*4;
					perimay = pmayor*4;
					arealateral = (perimen+perimay)*h/2;
					cout << "El area lateral del tronco de piramide es de: " << arealateral << endl;
				}
			}
		}
		break;
	case 2:
		cout << "PARA CONCER EL AREA TOTAL DEL TRONCO DE PIRAMIDE INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese el área lateral del tronco de piramide: " << endl;
		cin >> arealateral;
		if ((arealateral<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingresa el valor de una de las longitudes del perimetro menor del tronco de piramide: " << endl;
			cin >> lonmenor;
			if ((lonmenor<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingresa el valor de una de las longitudes del perimetro mayor del tronco de piramide: " << endl;
				cin >> lonmayor;
				if ((lonmayor<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					areamayor = lonmayor*lonmayor;
					areamenor = lonmenor*lonmenor;
					areatotal = arealateral+areamenor+areamayor;
					cout << "El area total del tronco de piramide es de: " << areatotal << endl;
				}
			}
		}
		break;
	case 3:
		cout << "PARA CONCER EL VOLUMEN DEL TRONCO DE PIRAMIDE INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese el valor del area de la base del perimetro mayor del tronco de piramide: " << endl;
		cin >> areamayor;
		if ((areamayor<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingrese el valor del area de la base del perimetro menor del tronco de piramide: " << endl;
			cin >> areamenor;
			if ((areamenor<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el perimetro menor del tronco de piramide: " << endl;
				cin >> pmenor;
				if ((pmenor<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese el valor del perimetro mayor del tronco de piramide: " << endl;
					cin >> pmayor;
					if ((pmayor<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						cout << "Ingrese la altura del tronco de piramide: " << endl;
						cin >> h;
						if ((h<=0)) {
							cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
						} else {
							volumen = (areamayor+areamenor+(pmenor*pmayor))*h/3;
							cout << "El volumen del tronco de piramide es de: " << volumen << endl;
						}
					}
				}
			}
		}
		break;
	default:
		cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
	}
	return 0;
}

