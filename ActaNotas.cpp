/*
Nombre del archivo: constantes.cpp
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
Instrucciones: Ejemplo con arreglos
*/
#include <iostream>
#include<string>


using namespace std;

int main (){
	const string carrera= "Tecnico Superior en Electronica Industrial";
	const string inscripcion= "2020IIS-EI025-01";
	const string asignatura= "Introduccion a la programacion";
	const string codigoAsignatura= "EI025";
	const string pensum= "03-EI01";
	string nombreDocente;
	string fecha;
	int cantEstudiantes;
	double promedioNotas;
	
	cout <<"//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\" << endl;
	cout <<                  "Bienvenido al sistema de control y registro academico del INSTITUTO TECNOLOGICO VICTORIA" <<endl;
	cout << "//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\ " << endl;
	cout << endl;
	cout << "Nombre del docente: " << endl;
	getline(cin,nombreDocente);
	cout << "Fecha: (DD/MM/AAAA): ";
	cin >> fecha;
	cout << "Cantidad de estudiantes del grupo: " <<endl;
	cin >> cantEstudiantes;
	
	string codigoCarnet[cantEstudiantes];
	string nombreEstudiante[cantEstudiantes];

	int acumulados[cantEstudiantes];
	int notaFinal[cantEstudiantes];
	int primerParcial[cantEstudiantes];
	int segundoParcial[cantEstudiantes];
	int tercerParcial[cantEstudiantes];
	char observacion[cantEstudiantes];
	
	cout << "//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\" <<endl;
	cout <<                  "Ingrese los datos del estudiante" <<endl;
	cout << "//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\" <<endl;
	for (int i=0; i < cantEstudiantes; i++){
		cout << "Estudiante[" << i+1 << "]" <<endl;
		cout << "Codigo de carnet= ";
		cin >> codigoCarnet[i];
		cout << "Nombre Completo: " <<endl;
		getline(cin >> ws,nombreEstudiante[i]);
		cout << "Nota del primer parcial= ";
		cin >> primerParcial[i];
		cout << "Nota del segundo paracial=";
		cin >> segundoParcial[i];
		cout << "Nota del tercer parcial=";
		cin >> tercerParcial[i];
		cout << "Nota acumulada= ";
		cin >> acumulados[i];
	}
	
	//Calculo de nota final
	for(int i=0; i < cantEstudiantes;i++){
		notaFinal[i]= primerParcial[i] + segundoParcial[i] + tercerParcial[i] + acumulados[i];
	}
	//Determinar si el estudiante aprobo el promedio
	for (int i=0; i < cantEstudiante;i++){
		if(notaFinal[i] < 70){
			observacion[i]= 'R';
		}else {
			obserrvacion[i]0 'A';
		}
	}
	//Calcular el promedio del grupo
	int sumaNotas= 0, promedioNotas;
	for(int i= 0; i < cantEstudiantes; i++){
		sumaNotas += notaFinal[i] //sumaNotas= sumaNotas + 
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}