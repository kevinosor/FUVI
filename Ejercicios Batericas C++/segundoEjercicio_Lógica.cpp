// Algoritmo que lea dos números y nos diga cuál de ellos es mayor o bien si son iguales

#include<iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL DIRA SI " << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado usuario favor de ingresar el primer valor numerico" <<endl;
	cin >> num1;
	cout << "Estimado usuario favor de ingresar el segundo valor numerico" <<endl;
	cin >> num2;
	if ((num1>num2)) {
		cout << num1 << " es mayor que " << num2 << endl;
	} else {
		if ((num1==num2)) {
			cout << "Ambos números son iguales" << endl;
		} else {
			if ((num1<num2)) {
				cout << num2 << " es mayor que " << num1 << endl;
			}
		}
	}
	return 0;
}

