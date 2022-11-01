/*
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
Instrucciones: Ejemplo de la estructura FOR 2.0
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	int num ,cant, aleatorio, cont= 0;
	cout << "Ingrese un numero" << endl;
	cin >> num;
	cout << "Cantidad de numeros" << endl;
	cin >> cant;
	srand(time(nullptr));
	
	for (int i= 1; i <= cant;i++){
		
		aleatorio= rand() % 100;
		cout << aleatorio << " " << endl;
		if (aleatorio % 2 ==0){
			cont++;
		}
	}
	cout << "La cantidad de numeros pares es de: " << cont << endl;
	cout << "La cantidad de numeros impares es de: " << cont << endl;

	return 0;
   
}