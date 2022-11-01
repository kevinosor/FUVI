/*
Nombre del archivo: constantes.cpp
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
Instrucciones: Ejemplo con arreglos dimensionales
*/
#include <iostream>


using namespace std;

int main (){
	//TIPO_DATO NOMBRE_ARREGLO [DIMENSION01] [DIMENSION02]
	int matrizA [2][2];
	cout << "Ingrese los datos: " << endl;
	for (int i=0; i < 2; i++){
		for (int j=0; j < 2; j++){
			cout << "Elemento [" << i << "," << j << "]= ";
			cin >> matrizA [i][j];
		}
	}
	
	cout << "//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\"
	for (int i=0; i < 2;i++){
		for (int j=0; j < 2; j++){
			cout << setw(15) << "Elemento [" << i << "," << j << "]= " << matrizA [i][j] <<endl;
		}
		cout << endl;
	}
	cout << endl;
	
	
	
	return 0;
}
