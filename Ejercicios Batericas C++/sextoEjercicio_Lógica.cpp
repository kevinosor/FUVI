//Un colegio desea saber qué porcentaje de niños y qué porcentaje de niñas hay en el curso actual. Diseñar un algoritmo para este propósito.

#include<iostream>
using namespace std;

int main() {
	int porcenninas, porcenninos;
	int cant, cantninas, cantninos;
	string grado, nombre;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL PORCENTAJE DE NIÑOS Y NIÑAS QUE HAY EN UN CURSO" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado docente, este programa le ayudara a saber el porcentaje de niños y niñas que hay en su curso." << endl;
	cout << "Antes de comenzar indiquenos su nombre y apellido: " << endl;
	cin >> nombre;
	cout << "Ahora indiquenos el grado al que pertenecen los alumnos (incluya la letra del grado en mayuscula)" << endl;
	cin >> grado;
	cout << "Y por ultimo, ingrese la cantidad total de alumnos que hay en el curso" << endl;
	cin >> cant;
	cout << "Estimado docente, favor de ingresar la cantaidad de niños que hay en el curso: " << endl;
	cin >> cantninos;
	if ((cantninos<=0)) {
		cout << "No puede ingresar este tipo de valor, intentelo nuevamente" << endl;
	} else {
		if ((cantninos>=1)) {
			cout << "Estimado docente, ahora ingrese la cantidad de niñas que hay en el curso: " << endl;
			cin >> cantninas;
			porcenninos = (cantninos*100)/cant;
			porcenninas = (cantninas*100)/cant;
			cout << "Estimado(a) profesor(a): " << nombre << endl;
			cout << "El porcentaje de niños que hay en el grado " << grado << " es de: " << porcenninos << "%" << endl;
			cout << "El porcentaje de niñas que ay en el grado " << grado  <<  " es de: " << porcenninas << "%" << endl;
		}
	}
	return 0;
}

