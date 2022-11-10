// Modificar el algoritmo anterior, de forma que, si se teclea un cero, se vuelva a pedir el número por teclado 
// (así hasta que se teclee un número mayor que cero).
#include<iostream>
using namespace std;


int main() {
	int x;

	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, QUE NOS DIRA SI UN NUMERO ES PAR O IMPAR" << endl;
	cout << "--------------------------------" << endl;
	cout << "Escriba un numero: " << endl;
	cin >> x;
	if ((x==0)) {
		do {
			cout << "Este valor no esta permitido, intentelo nuevamente" << endl;
			cin >> x;
		} while (x==0);
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

