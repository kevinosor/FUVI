// Desarrollar un algoritmo que nos calcule el cuadrado de los 9 primeros números naturales.

#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float num;
	float res;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, QUE NOS IMPRIMIRA EL CUADRADO DE LOS PRIMEROS NUMEROS NATURALES" << endl;
	cout << "--------------------------------" << endl;
	cout << "El cuadrado de los primeros 9 numeros es de: " << endl;
	for (num=1;num<=9;num++) {
		res = pow(num,2);
		cout << num << "=" << res << endl;
	}
	return 0;
}

