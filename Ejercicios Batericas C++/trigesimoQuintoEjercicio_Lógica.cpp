// Elabore un algoritmo que dado un valor X, calcule

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float fx;
	int num;
	
	cout << "ESTO ES UN EXPERIMENTO DE LÓGICA, EL CUAL NOS DARA UN RESULTADO DEPENDIENDO DE SI EL VALOR ES MAYOR O MENOR QUE CERO" << endl;
	cout << "--------------------------------" << endl;
	cout << "Ingrese un numero: ";
	cin >> num;
	if ((num>0)) {
		fx = pow((num-2),2)/2+pow((num-4),4)/4+pow((num-6),6)/6;
		cout << " El resultado es: " << fx << endl;
	} else {
		if ((num<0)) {
			fx = pow((num+2),2)/2+pow((num+4),4)/4+pow((num+6),6)/6;
			cout << " El resultado es: " << fx << endl;
		}
	}
	return 0;
}

