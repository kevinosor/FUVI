// Algoritmo que visualice la cuenta de los números que son múltiplos de 2 o de 3 que hay entre 1 y 100.

#include<iostream>
using namespace std;

int main() {
	float noquiero;
	int num;
	int respuesta;
	float siquiero;
	
	siquiero = 1;
	noquiero = 0;
	cout << "ESTO ES UN EXPERIMENTO DE LÓGICA, EL CUAL SOLO NOS MOSTRARA LOS NUMEROS MULTIPLOS DE 3 Y 2" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado(a) indique si desea conocer los numeros multiplos de 2 y 3" << endl;
	cout << "Indique 1 para SI y 0 para NO" << endl;
	cin >> respuesta;
	if ((respuesta==0)) {
		cout << "Esta bien, puede volver cuando desee conocer la respuesta" << endl;
	} else {
		if ((respuesta==1)) {
			cout << "Indique el numero de los multiplos que desea conocer (recuerde que solo puede ingresar 2 y 3)" << endl;
			cin >> num;
			if ((num<2)) {
				cout << "ERROR, intentelo nuevamente" << endl;
			} else {
				if ((num>3)) {
					cout << "ERROR, intentelo nuevamente" << endl;
				} else {
					if ((num==2)) {
						for (num=1;num<=100;num++) {
							if ((num%2==0)) {
								cout << num << endl;
							}
						}
					} else {
						if ((num==3)) {
							for (num=1;num<=100;num++) {
								if ((num%3==0)) {
									cout << num << endl;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

