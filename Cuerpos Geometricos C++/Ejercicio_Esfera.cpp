
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float area, areac, areaz, h, r;
	float rmayor, rprima, volumen;
	int x;
	
	cout << "Este algoritmo fue creado para saber cual es el area, volumen, zona esferica y casquete esferico de una esfera" << endl;
	cout << "------------------------MENU DE OPCIONES------------------------" << endl;
	cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
	cout << "Area= 1; Volumen= 2; Zona esferica= 3; Casquete esferico= 4 " << endl;
	cout << "----------------------------------------------------------------" << endl;
	cin >> x;
	cout << " " << endl;
	switch (x) {
	case 1:
		cout << "PARA CONCER EL AREA DE UNA ESFERA INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese el radio de la esfera: " << endl;
		cin >> r;
		if ((r<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			area = 4*3.14*pow(r,2);
			cout << "El area de la esfera es de: " << area << endl;
		}
		break;
	case 2:
		cout << "PARA CONCER EL VOLUMEN DE UNA ESFERA INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese el radio de la esfera: " << endl;
		cin >> r;
		if ((r<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			volumen = 4/3*3.14*pow(r,3);
			cout << "El volumen de la esfera es de: " << volumen << endl;
		}
		break;
	case 3:
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area de la zona esferica= 1; Volumen de la zona esferica= 2; " << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA DE UNA ZONA ESFERICA INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el radio mayor de la esfera: " << endl;
			cin >> rmayor;
			if ((rmayor<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese la altura de la zona esferica: " << endl;
				cin >> h;
				if ((h<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					areaz = 2*3.14*rmayor*h;
					cout << "El area de la zona esferica es de: " << areaz << endl;
				}
			}
			break;
		case 2:
			cout << "PARA CONCER EL VOLUMEN DE UNA ZONA ESFERICA INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el radio de la zona esferica: " << endl;
			cin >> r;
			if ((r<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese la radio prima de la zona esferica: " << endl;
				cin >> rprima;
				if ((rprima<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese la altura de la zona esferica: " << endl;
					cin >> h;
					if ((h<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						volumen = 3.14*h*(pow(h,2)+(3*pow(r,2))+(3*pow(rprima,3)))/6;
						cout << "El volumen de la zona esferica es de: " << volumen << endl;
					}
				}
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	case 4:
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area del casquete esferico= 1; Volumen del casquete esferico= 2; " << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA DEl CASQUETE ESFERICO INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el radio mayor de la esfera: " << endl;
			cin >> rmayor;
			if ((rmayor<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese la altura del casquete esferico: " << endl;
				cin >> h;
				if ((h<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					areaz = 2*3.14*rmayor*h;
					cout << "El area del casquete esferico es de: " << areac << endl;
				}
			}
			break;
		case 2:
			cout << "PARA CONCER EL VOLUMEN DEL CASQUETE ESFERICO INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el radio de la zona esferica: " << endl;
			cin >> r;
			if ((r<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese la altura de la zona esferica: " << endl;
				cin >> h;
				if ((h<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					volumen = 3.14*pow(h,2)*((3*r)-h)/3;
					cout << "El volumen del casquete esferico es de: " << volumen << endl;
				}
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	default:
		cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
	}
	return 0;
}

