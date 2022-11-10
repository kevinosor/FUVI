// Dado un número entero n, encuentre sus divisores.

#include<iostream>
using namespace std;

int main() {
	int n;
	float x;
	
	cout << "ESTO ES UN EXPERIMENTO DE LÓGICA, EL CUAL NOS DIRA LOS DIVISORES DE UN NUMERO N" << endl;
	cout << "--------------------------------" << endl;
	cout << "Ingrese un numero" << endl;
	cin >> n;
	for (x=1;x<=n;x++) {
		if (n %x==0) {
			cout << "Los divisores del numero son: " << x << endl;
		}
	}
	return 0;
}

