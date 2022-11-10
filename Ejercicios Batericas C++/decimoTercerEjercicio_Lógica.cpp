// Se pide representar el algoritmo que nos calcule la suma de los N primeros números pares. Es decir, si insertamos un 5, nos haga la suma de 6+8+10+12+14.

#include<iostream>
using namespace std;


int main() {
	float contador, suma;
	int limite, num;

	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EN EL CUAL INGRESAREMOS UN NUMERO Y ESTE SUMARA LOS PRIMEROS NUMEROS PARES" << endl;
	cout << "--------------------------------" << endl;
	cout << " " << endl;
	cout << "------------------------------------------" << endl;
	cout << "Estimado usuario ingrese un numero" << endl;
	cin >> num;
	if ((num<=0)) {
		cout << "ERROR, TIPO DE VARIBLE NO ADMITIDA" << endl;
	} else {
		if ((num>=1)) {
			contador = 0;
			limite = num;
			while ((contador<limite)) {
				if ((num%2==0)) {
					suma = num+suma;
					contador = contador+1;
				}
				num = num+1;
			}
			cout << suma << endl;
			cout << "------------------------------------------" << endl;
		}
	}
	return 0;
}

