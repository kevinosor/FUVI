// Diseñar un algoritmo que, dados 10 números naturales, indique cuántos de ellos son números pares, nos muestre estos y calcule la media aritmética de los impares

#include<iostream>
using namespace std;

int main() {
	float impares, pares, sumimpares, sumpares, x;
	int num;
	
	pares = 0;
	impares = 0;
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL SUMARA NUMEROS IMPARES Y SACARA EL PROMEDIO DE LOS IMPARES" << endl;
	cout << "--------------------------------" << endl;
	for (x=1;x<=10;x++) {
		cout << "Estiamdo usuario ingrese un numero";
		cin >> num;
		if ((num%2==0)) {
			sumpares = sumpares+num;
			pares = pares+1;
		} else {
			sumimpares = sumimpares+num;
			impares = impares+1;
		}
	}
	cout << "La suma de los numeros pares del 1 al 10 es de: " << sumpares << endl;
	cout << "Los numeros pares son: " << pares << endl;
	cout << "El promedio de los numeros impares es de: " << sumimpares/impares << endl;
	cout << "Los numeros impares son: " << impares << endl;
	return 0;
}

