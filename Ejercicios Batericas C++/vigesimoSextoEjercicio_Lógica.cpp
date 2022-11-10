// Un algoritmo que calcule el producto de N números ingresados por el usuario.

#include<iostream>
using namespace std;

int main() {
	int a, a2, a3, a4, a5;
	int b, b2, b3, b4, b5;
	int c, c2, c3, c4, c5;
	int valornum;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL MULTIPLICARA DOS NUMEROS EN DEPENDENCIA DE LA CANTIDAD QUE INGRESE, SIENDO 5 LA CANTIDAD MAXIMA" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado usuario, ¿Cuantos numeros desea ingresar? (cantidad maxima 5)" << endl;
	cout << "Ingrese el valor" << endl;
	cin >> valornum;
	if ((valornum>5)) {
		cout << "ERROR" << endl;
	} else {
		if ((valornum<=0)) {
			cout << "ERROR" << endl;
		} else {
			if ((valornum>=0 || valornum<=5)) {
				if ((valornum==1)) {
					cout << "Ingrese el valor del multiplicando" << endl;
					cin >> a;
					cout << "Ingrese el valor del multiplicador" << endl;
					cin >> b;
					c = a*b;
					cout << "-----------------------------------------" << endl;
					cout << "El resultado de: " << a << "*" << b << " es: " << c << endl;
				} else {
					if ((valornum==2)) {
						cout << "Ingrese el valor del multiplicando" << endl;
						cin >> a;
						cin >> a2;
						cout << "Ingrese el valor del multiplicador" << endl;
						cin >> b;
						cin >> b2;
						c = a*b;
						c2 = a2*b2;
						cout << "-----------------------------------------" << endl;
						cout << "El resultado de: " << a << "*" << b << " es: " << c << endl;
						cout << "El resultado de: " << a2 << "*" << b2 << " es: " << c2 << endl;
					} else {
						if ((valornum==3)) {
							cout << "Ingrese el valor del multiplicando" << endl;
							cin >> a;
							cin >> a2;
							cin >> a3;
							cout << "Ingrese el valor del multiplicador" << endl;
							cin >> b;
							cin >> b2;
							cin >> b3;
							c = a*b;
							c2 = a2*b2;
							c3 = a3*b3;
							cout << "-----------------------------------------" << endl;
							cout << "El resultado de: " << a << "*" << b << " es: " << c << endl;
							cout << "El resultado de: " << a2 << "*" << b2 << " es: " << c2 << endl;
							cout << "El resultado de: " << a3 << "*" << b3 << " es: " << c3 << endl;
						} else {
							if ((valornum==4)) {
								cout << "Ingrese el valor del multiplicando" << endl;
								cin >> a;
								cin >> a2;
								cin >> a3;
								cin >> a4;
								cout << "Ingrese el valor del multiplicador" << endl;
								cin >> b;
								cin >> b2;
								cin >> b3;
								cin >> b4;
								c = a*b;
								c2 = a2*b2;
								c3 = a3*b3;
								c4 = a4*b4;
								cout << "-----------------------------------------" << endl;
								cout << "El resultado de: " << a << "*" << b << " es: " << c << endl;
								cout << "El resultado de: " << a2 << "*" << b2 << " es: " << c2 << endl;
								cout << "El resultado de: " << a3 << "*" << b3 << " es: " << c3 << endl;
								cout << "El resultado de: " << a4 << "*" << b4 << " es: " << c4 << endl;
							} else {
								if ((valornum==5)) {
									cout << "Ingrese el valor del multiplicando" << endl;
									cin >> a;
									cin >> a2;
									cin >> a3;
									cin >> a4;
									cin >> a5;
									cout << "Ingrese el valor del multiplicador" << endl;
									cin >> b;
									cin >> b2;
									cin >> b3;
									cin >> b4;
									cin >> b5;
									c = a*b;
									c2 = a2*b2;
									c3 = a3*b3;
									c4 = a4*b4;
									c5 = a5*b5;
									cout << "-----------------------------------------" << endl;
									cout << "El resultado de: " << a << "*" << b << " es: " << c << endl;
									cout << "El resultado de: " << a2 << "*" << b2 << " es: " << c2 << endl;
									cout << "El resultado de: " << a3 << "*" << b3 << " es: " << c3 << endl;
									cout << "El resultado de: " << a4 << "*" << b4 << " es: " << c4 << endl;
									cout << "El resultado de: " << a5 << "*" << b5 << " es: " << c5 << endl;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

