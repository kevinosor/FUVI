// Dados X e Y enteros positivos, diseña un algoritmo que dé el máximo común divisor.

#include<iostream>
using namespace std;

int main() {
	int max, x;
	float num;
	int num1, num2;

	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL NOS DIRA EL MAXIMO COMUN DIVISOR DE DOS NUMEROS" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado usuario ingrese dos numeros" << endl;
	cin >> num1;
	cin >> num2;
	if ((num1<=0 || num2<=0)) {
		cout << "ERROR, TIPO DE VARIALE NO ADMITIDA. UNA DE LAS VARIABLES DEBE SER MAYOR A 0" << endl;
	} else {
		if ((num>=1 || num2>=1)) {
			max = 1;
			x = 1;
			while (x<=num1) {
				if ((num1%x==0 && num2%x==0)) {
					if ((x>max)) {
						max = x;
					}
				}
				x = x+1;
			}
			cout << "El MCD de los numeros ingresados es de: " << max << endl;
		}
	}
	return 0;
}

