/*
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
Instrucciones: Ejemplo de la estructura FOR
*/
#include <iostream>

using namespace std;

int main (){
	int tabla;
	cout << "Cual tabla de multiplicar desea conocer: " <<endl;
	cin >> tabla;
	
	if (tabla <= 0){
	cout << "ERROR, TIPO DE VALOR NO ADMITIDO" <<endl;
	}else if (tabla > 0){
		for (int i= 1;i < 13;i++){
		if (i % 1 ==0){
			cout << tabla << " x " << i << "= " << tabla*i <<endl; 
		}
	}
	}

	
	
	return 0;
}