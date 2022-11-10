// Se pide representar el algoritmo que nos calcule la suma de los N primeros números naturales. N se leerá por teclado.

#include<iostream>
using namespace std;

int main() {
	int contador, suma, x;
	float n;

	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, QUE CALCULARA LA SUMA DE LOS PRIMEROS NUMEROS NATURALES" << endl;
	cout << "--------------------------------" << endl;
	cout << "Escriba un numero" << endl;
	cin >> x;
	suma = 0;
	for (contador=1;contador<=10;contador++) {
		suma = n+suma;
		n = n+1;
	}
	cout << suma << endl;
	return 0;
}

