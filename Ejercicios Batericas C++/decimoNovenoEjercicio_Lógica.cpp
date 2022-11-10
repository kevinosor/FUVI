// Calcular las calificaciones de un grupo de alumnos. La nota final de cada alumno se calcula según el siguiente criterio: la parte práctica vale el 10%;
// la parte de problemas vale el 50% y la parte teórica el 40%. El algoritmo leerá el nombre del alumno, las tres notas, escribirá el resultado y volverá a
// pedir los datos del siguiente alumno hasta que el nombre sea una cadena vacía. Las notas deben estar entre 0 y 10, si no lo están, no imprimirá las
// notas, mostrará un mensaje de error y volverá a pedir otro alumno.
#include<iostream>
using namespace std;

int main() {
	int cantalumnas, cantalumnos, cantotal;
	int notapractica, notaproblemas, notateorica;
	float contador, notafinal;
	float npracticaf, nproblemaf, nteoriaf;
	string grado, nombrealumna, nombrealumno, nombreprofesor;
	
	cout << "ESTO ES UN EXPERIMENTO DE LÓGICA, EN EL CUAL INGRESAREMOS NOTAS DE ESTUDIANTES Y AL FINAL SE IMPRIMIRA SU NOTA FINAL" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado docente, este programa le ayudara a saber el porcentaje de niños y niñas que hay en su curso." << endl;
	cout << "Antes de comenzar indiquenos su nombre y apellido: " << endl;
	cin >> nombreprofesor;
	cout << "Ahora indiquenos el grado al que pertenecen los alumnos (incluya la letra del grado en mayuscula)" << endl;
	cin >> grado;
	cout << "Y por último, ingrese la cantidad total de estudiantes que hay en el curso" << endl;
	cin >> cantotal;
	if ((cantotal<=0 || cantotal>60)) {
		cout << "ERROR. Tipo de variable no admitida o ha exedido el limite de cantidad de alumnos" << endl;
	} else {
		if ((cantotal>=1 || cantotal<=60)) {
			cout << "Estimado profesor(a):" << nombreprofesor << " favor de ingresar la cantaidad de alumnos que hay en el curso: " << endl;
			cin >> cantalumnos;
			if ((cantalumnos<=0)) {
				cout << "ERROR. No puede ingresar este tipo de valor, intentelo nuevamente" << endl;
			} else {
				contador = 0;
				do {
					cout << "Estimado profesor(a): " << nombreprofesor << " ahora ingrese el nombre del alumno : " << endl;
					cin >> nombrealumno;
					cout << "Ingrese las notas del alumno: " << endl;
					cout << "Ingrese la nota de practica: ";
					cin >> notapractica;
					contador = contador+1;
					if ((notapractica>10 || notapractica<0)) {
						cout << "Estimado profesor(a): " << nombreprofesor << " Ud. ha ingresado un valor no admitido por el sistema, favor de intentarlo nuevamente" << endl;
					} else {
						if ((notapractica<=10 && notapractica>=0)) {
							cout << "Ingrese la nota de problemas: ";
							cin >> notaproblemas;
							if ((notaproblemas>10 || notaproblemas<0)) {
								cout << "Estimado profesor(a): " << nombreprofesor << " Ud. ha ingresado un valor no admitido por el sistema, favor de intentarlo nuevamente" << endl;
							} else {
								if ((notaproblemas<=10 && notaproblemas>=0)) {
									cout << "Ingrese la nota de teorica: ";
									cin >> notateorica;
									if ((notateorica>10 || notateorica<0)) {
										cout << "Estimado profesor(a): " << nombreprofesor << " Ud. ha ingresado un valor no admitido por el sistema, favor de intentarlo nuevamente" << endl;
									} else {
										if ((notateorica<=10 && notateorica>=0)) {
											npracticaf = notapractica*0.1;
											nproblemaf = notaproblemas*0.5;
											nteoriaf = notateorica*0.4;
											notafinal = npracticaf+nproblemaf+nteoriaf;
											cout << "Y su nota final es de: " << notafinal << endl;
										}
									}
								}
							}
						}
					}
				} while (contador!=cantalumnos);
				cout << "Estimado profesor(a):" << nombreprofesor << " favor de ingresar la cantaidad de alumnas que hay en el curso: " << endl;
				cin >> cantalumnas;
				if ((cantalumnas<=0)) {
					cout << "ERROR. No puede ingresar este tipo de valor, intentelo nuevamente" << endl;
				} else {
					contador = 0;
					do {
						cout << "Estimado profesor(a): " << nombreprofesor << " ahora ingrese el nombre de la alumna: " << endl;
						cin >> nombrealumna;
						cout << "Ingrese las notas de la alumna: " << endl;
						cout << "Ingrese la nota de practica: ";
						cin >> notapractica;
						contador = contador+1;
						if ((notapractica>10 || notapractica<0)) {
							cout << "Estimado profesor(a): " << nombreprofesor << " Ud. ha ingresado un valor no admitido por el sistema, favor de intentarlo nuevamente" << endl;
						} else {
							if ((notapractica<=10 && notapractica>=0)) {
								cout << "Ingrese la nota de problemas: ";
								cin >> notaproblemas;
								if ((notaproblemas>10 || notaproblemas<0)) {
									cout << "Estimado profesor(a): " << nombreprofesor << " Ud. ha ingresado un valor no admitido por el sistema, favor de intentarlo nuevamente" << endl;
								} else {
									if ((notaproblemas<=10 && notaproblemas>=0)) {
										cout << "Ingrese la nota de teorica: ";
										cin >> notateorica;
										if ((notateorica>10 || notateorica<0)) {
											cout << "Estimado profesor(a): " << nombreprofesor << " Ud. ha ingresado un valor no admitido por el sistema, favor de intentarlo nuevamente" << endl;
										} else {
											if ((notateorica<=10 && notateorica>=0)) {
												npracticaf = notapractica*0.1;
												nproblemaf = notaproblemas*0.5;
												nteoriaf = notateorica*0.4;
												notafinal = npracticaf+nproblemaf+nteoriaf;
												cout << "Y su nota final es de: " << notafinal << endl;
											}
										}
									}
								}
							}
						}
					} while (contador!=cantalumnas);
				}
			}
		}
	}
	return 0;
}

