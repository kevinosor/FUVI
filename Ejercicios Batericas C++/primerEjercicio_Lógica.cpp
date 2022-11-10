// Dadas dos variables numéricas A y B, que el usuario debe teclear, se pide 
// realizar un algoritmo que intercambie los valores de ambas variables y muestre cuánto valen al final las dos variables.

#include<iostream>
using namespace std;

int main() {
	int valor1;
	int valor2;
	int valorextra;

	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL CAMBIARA DE POSICIÓN DOS NÚMEROS" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado usuario favor de ingresar el primer valor numerico" <<endl;
	cin >> valor1;
	cout << "Estimado usuario favor de ingresar el segundo valor numerico" <<endl;
	cin >> valor2;
	valorextra = valor1;
	valor1 = valor2;
	valor2 = valorextra;
	cout << "Ahora el valor del primer número es: " << valor1 << endl;
	cout << "Y el valor del segundo número es: " << valorextra << endl;
	return 0;
}

