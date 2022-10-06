/*
Nombre del archivo: Manipuladores.cpp
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
Instrucciones: Ejemplos de manipulacion de E/S
*/
#include<iostream>
#include<iomanip>

using namespace std;

int main (){
	cout <<left;
	 cout << setw(20)<< "Artistas" << setw(10) << "Album" << setw(10) << "Musica" <<endl
          << setw(20) << "Alan Walker" << setw(10) << "Different World" << setw(10) << "Darkside";
	
	cout <<fixed <<setprecision (10) <<12.34467 <<endl;
	cout << "----------------------------------------------------" <<endl;
	
	cout  <<left << setw(20) << "Asignatura" << setw(15) << "Estudiantes" <<endl
          <<left << setw(20) << "Programacion" << right << setw(15) << 12 <<endl
          <<left << setw(20) << "Redes" << right << setw(15) <<9;
	return 0;
}
