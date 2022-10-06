/*
Nombre del archivo: SumaNumeros.cpp
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
Instrucciones: Ejemplos con estructura condicional if/if...else/if...else...if
*/
#include<iostream>

using namespace std;

int main (){
	//Estructura condicional o selectiva if
	bool estaAprobado= false, esDesersion= true;
	
	if (estaAprobado || esDesersion){
		cout << "Ud ha aprobado la asignatura" <<endl;
	}else{
		cout << "Ud NO ha aprobado la asignatura" <<endl;
	}
	
	
	return 0;
}