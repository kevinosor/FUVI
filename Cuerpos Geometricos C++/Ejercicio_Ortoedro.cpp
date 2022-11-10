
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float altura, area, caras;
	float diagonal, longi, profundidad, volumen;
	int x;
	
	cout << "Este algoritmo fue creado para saber cual es el area, volumen y diagonal de un ortoedro" << endl;
	cout << "------------------------MENU DE OPCIONES------------------------" << endl;
	cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
	cout << "Area= 1; Volumen= 2; Diagonal: 3" << endl;
	cout << "----------------------------------------------------------------" << endl;
	cin >> x;
	cout << " " << endl;
	switch (x) {
	case 1:
		cout << "PARA CONCER EL AREA DE UN ORTOEDRO INGRESE EL SIGUIENTE DATO: " << endl;
		cout << "Ingrese el valor de la altura del ortoedro: " << endl;
		cin >> altura;
		if ((altura<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingrese el valor de la longitud del ortoedro: " << endl;
			cin >> longi;
			if ((longi<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el valor de la profundidad del ortoedro: " << endl;
				cin >> profundidad;
				if ((profundidad<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					area = 2*((altura*longi)+(altura*profundidad)+(longi*profundidad));
					caras = area/6;
					cout << "El area de cada unas de las caras del ortoedro es de: " << caras << endl;
					cout << "El area del ortoedro es de: " << area << endl;
				}
			}
		}
		break;
	case 2:
		cout << "PARA CONCER EL VOLUMEN UN HEXAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
		cout << "Ingrese el valor de la altura del ortoedro: " << endl;
		cin >> altura;
		if ((altura<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingrese el valor de la longitud del ortoedro: " << endl;
			cin >> longi;
			if ((longi<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el valor de la profundidad del ortoedro: " << endl;
				cin >> profundidad;
				if ((profundidad<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					volumen = altura*longi*profundidad;
					cout << "El volumen del ortoedro es de: " << volumen << endl;
				}
			}
		}
		break;
	case 3:
		cout << "Ingrese el valor de la altura del ortoedro: " << endl;
		cin >> altura;
		if ((altura<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingrese el valor de la longitud del ortoedro: " << endl;
			cin >> longi;
			if ((longi<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el valor de la profundidad del ortoedro: " << endl;
				cin >> profundidad;
				if ((profundidad<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					diagonal = sqrtf(pow(altura,2)+pow(longi,2)+pow(profundidad,2));
					cout << "La diagonal del ortoedro es de: " << diagonal << endl;
				}
			}
		}
		break;
	default:
		cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
	}
	return 0;
}

