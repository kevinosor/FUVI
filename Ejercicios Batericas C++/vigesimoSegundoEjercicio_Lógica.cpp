// Algoritmo que, dado un año, nos diga si es bisiesto o no. Un año es bisiesto bajo las siguientes condiciones:
// Un año divisible por 4 es bisiesto y no debe ser divisible entre 100.
// Si un año es divisible entre 100 y además es divisible entre 400, también resulta bisiesto

#include<iostream>
using namespace std;

int main() {
	int ano;

	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL NOS DIRA SI UN AÑO ES O NO BISIESTO" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado usuario este algoritmo fue creado para indicarle si un año es bisiesto o no" << endl;
	cout << "Debe de tener en cuenta lo siguiente: para saber si el año que ingrese es o no bisiesto nos basamos bajo el CALENDARIO GREGORIANO." << endl;
	cout << "Por ende, no puede ingresar un valor como año menor a 1582, de lo contrario se le mostrara un mensaje de error. " << endl;
	cout << "Estimado usuario ingrese el año" << endl;
	cin >> ano;
	if ((ano<1582)) {
		cout << "ERROR. Este valor no es valido ya que no esta acorde con el calendario gregoriano, por favor intentelo nuevamente." << endl;
	} else {
		if ((ano>=1582)) {
			if ((ano%4==0 && ano%100!=0)) {
				cout << "El año es bisiesto" << endl;
			} else {
				if ((ano%400==0 && ano%100==0)) {
					cout << "El año es bisiesto" << endl;
				} else {
					cout << "El año no es bisiesto" << endl;
				}
			}
		}
	}
	return 0;
}

