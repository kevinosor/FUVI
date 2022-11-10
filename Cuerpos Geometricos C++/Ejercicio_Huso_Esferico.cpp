
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float alfa, areah, r, volumenc;
	int x;
	
	cout << "Este algoritmo fue creado para saber cual es el area del huso esferico y el volumen de la cuña esferica " << endl;
	cout << "------------------------MENU DE OPCIONES------------------------" << endl;
	cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
	cout << "Area= 1; Volumen= 2; " << endl;
	cout << "----------------------------------------------------------------" << endl;
	cin >> x;
	cout << " " << endl;
	switch (x) {
	case 1:
		cout << "PARA CONCER EL AREA DEl HUSO ESFERICO INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese el radio de la esfera: " << endl;
		cin >> r;
		if ((r<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingrese el angulo del huso esferico : " << endl;
			cin >> alfa;
			if ((alfa<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				areah = 3.14*pow(r,2)*alfa/90;
				cout << "El area del huso esferico es de: " << areah << endl;
			}
		}
		break;
	case 2:
		cout << "PARA CONCER EL VOLUMEN DE LA CUÑA ESFERICA INGRESE LOS SIGUIENTES DATOS: " << endl;
		cout << "Ingrese el radio de la esfera: " << endl;
		cin >> r;
		if ((r<=0)) {
			cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
		} else {
			cout << "Ingrese el angulo de la cuña esferica : " << endl;
			cin >> alfa;
			if ((alfa<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				volumenc = 3.14*pow(r,3)*alfa/270;
				cout << "El volumen de la cuña esferica es de: " << volumenc << endl;
			}
		}
		break;
	default:
		cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
	}
	return 0;
}

