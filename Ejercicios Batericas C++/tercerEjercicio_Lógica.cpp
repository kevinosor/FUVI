// Algoritmo que lea tres números distintos y nos diga cuál de ellos es el mayor

#include<iostream>
using namespace std;

int main() {
	int numa;
	int numb;
	int numc;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL NOS DIRA QUE NUMERO ES MAYOR DE 3 NUMEROS DISTINTOS" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado usuario favor de ingresar el valor de cada uno de los numeros" << endl;
	cin >> numa;
	cin >> numb;
	cin >> numc;
	cout << "A continuacion le diremos cual numero es mayor de los tres que ingreso: " << endl;
	if ((numa>numb && numa>numc)) {
		cout << "El primer numero es el mayor de los 3" << endl;
	} else {
		if ((numb>numa && numb>numc)) {
			cout << "El segundo numero es el mayor de los 3" << endl;
		} else {
			if ((numc>numa && numc>numb)) {
				cout << "El tercer numero es el mayor de los 3" << endl;
			}
		}
	}
	return 0;
}

