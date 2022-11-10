// Realizar un algoritmo que lea un número por teclado. En caso de que ese número sea 0 o menor que 0, se saldrá del programa imprimiendo antes un
// mensaje de error. Si es mayor que 0, se deberá calcular su cuadrado y la raíz cuadrada del mismo, visualizando el número que ha tecleado el usuario y
// su resultado ("Del numero X, su potencia es X y su raíz X").

#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float a;
	float b;
	float n;
	float x;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL NOS DIRA LA POTENCIA Y RAIZ DE UN NUMERO" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado usuario favor ingrese un numero: " << endl;
	cin >> n;
	if ((n<=0)) {
		do {
			cout << "ERROR. No puede ingresar valores nagativos o iguales a 0, favor intentelo nuevamente." << endl;
			cin >> n;
		} while (x<=0);
	} else {
		if ((n>0)) {
			a = sqrtf(n);
			cout << "La raiz cuadrada de " << n << " es: " << a << endl;
			b = pow(n,2);
			cout << "La potencia de " << n << " es: " << b << endl;
		}
	}
	return 0;
}

