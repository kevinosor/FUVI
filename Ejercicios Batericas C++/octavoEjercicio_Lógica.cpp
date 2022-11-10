// Realizar un algoritmo que, dado un número entero, visualice en pantalla si es par o impar. 
// En el caso de ser 0, debe visualizar "el número no es par ni impar"

#include<iostream>
using namespace std;


int main() {
	int x;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, QUE NOS DIRA SI UN NÚMERO ES PAR O IMPAR" << endl;
	cout << "--------------------------------" << endl;
	cout << "Escriba un numero: " << endl;
	cin >> x;
	if ((x==0)) {
		cout << "Este numero no es par ni impar" << endl;
	} else {
		if ((x%2==0)) {
			cout << "Su numero es par" << endl;
		} else {
			if ((x!=0)) {
				cout << "Su numero es impar" << endl;
			}
		}
	}
	return 0;
}

