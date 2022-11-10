// Algoritmo que nos diga si una persona puede acceder a cursar un ciclo formativo de grado superior o no. Para acceder a un grado superior, 
//si se tiene un título de bachiller, en caso de no tenerlo, se puede acceder si hemos superado una prueba de acceso (admisión)

#include<iostream>
using namespace std;

int main() {
	string nombre;
	int noposeo, siposeo, respuesta;
	float notaexamen;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, QUE NOS DIRA SI PODEMOS ENTRAR O NO A UN CURSO DE GRADO SUPERIOR" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado alumno ingrese su primer nombre y apellido: " << endl;
	cin >> nombre;
	cout << "Estimado alumno, para poder ingresar a un curso de grado superior indique lo siguiente: " << endl;
	siposeo = 1;
	noposeo = 0;
	cout << "¿Usted cuenta con titulo bachillerato? (ingrese 1 PARA SI o 0 PARA NO)" << endl;
	cin >> respuesta;
	if ((respuesta==1)) {
		cout << "Usted puede ingresar a un curso de grado superior, favor de llevar su documento a direccion" << endl;
	} else {
		if ((respuesta==0)) {
			cout << "Al no poseer un titulo de bachillerato, indiquenos si a ha superado la prueba de admisión (ingrese 1 PARA SI o 0 PARA NO)" << endl;
			cin >> respuesta;
			if ((respuesta==1)) {
				cout << "Indiquenos la nota de su examen de admision " << endl;
				cin >> notaexamen;
				if ((notaexamen>=70)) {
					cout << "Felicidades " << nombre << ", al haber aprobado el examen de admision, ud puede ingresar a cursos de grado superior" << endl;
				} else {
					if ((notaexamen<=69)) {
						cout << "Estimado " << nombre << ", lo sentimos al no haber aprobado el examen de admision, ud no puede ingresar a cursos de grado superior" << endl;
					}
				}
			} else {
				if ((respuesta==0)) {
					cout << "Estimado " << nombre << ", al no poseer titulo de bachillerato e indicar que no ha aprobado el examen de admision" << endl;
					cout << "NO PUEDE INGRESAR A UN CURSO DE GRADO SUPERIOR" << endl;
				}
			}
		}
	}
	return 0;
}

