// Diseñar un algoritmo que pida por teclado tres números; si el primero es negativo, debe imprimir el producto de los tres y si no lo es, imprimirá la suma

#include<iostream>
using namespace std;


int main() {
	int numa;
	int numb;
	int numc;
	int result;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL NOS DIRA UNA SUMA O MULTIPLICACION DEPENDIENDO DEL VALOR DEL PRIMER NUMERO" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado usuario favor de ingresar 3 números" << endl;
	cin >> numa;
	cin >> numb;
	cin >> numc;
	if ((numa<0)) {
		result = numa*numb*numc;
		cout << "El primer numero al ser menor que 0, el resultado sera la multiplicacion de los 3 numeros= " << result << endl;
	} else {
		if ((numa>0)) {
			result = numa+numb+numc;
			cout << "El primer numero al ser mayor que 0, el resultado sera la suma de los 3 numeros= " << result << endl;
		}
	}
	return 0;
}

