// Dados 3 números, determinar si la suma de dos de ellos es igual al tercero. Si se cumple, escribir "iguales", si no, escribir "distintos"

#include<iostream>
using namespace std;

int main() {
	int number1;
	int number2;
	int number3;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL NOS DIRA SI LA SUMA DE LOS DOS PRIMEROS NUMEROS ES IGUAL O NO AL TERCER NUMERO" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado usuario ingrese 3 numeros: " << endl;
	cin >> number1;
	cin >> number2;
	cin >> number3;
	if ((number1<=0 && number2<=0 && number3<=0)) {
		cout << "NO PUEDE INGRESAR ESTE TIPO DE VALORES" << endl;
	} else {
		if ((number1>0 && number2>0 && number3>0)) {
			if ((number1+number2==number3)) {
				cout << "La suma de los dos primeros numeros ES IGUALES al tercero" << endl;
			} else {
				if ((number1+number2!=number3)) {
					cout << "La suma de los dos primeros numeros SON DISTINTOS al tercero" << endl;
				}
			}
		}
	}
	return 0;
}

