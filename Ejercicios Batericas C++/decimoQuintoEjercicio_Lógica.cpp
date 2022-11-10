// Teniendo en cuenta que la clave es "tuani", escribir un algoritmo que nos pida una clave. Solo tenemos 3 intentos para acertar, si fallamos los 3
// intentos nos mostrará un mensaje indicándonos que hemos agotado esos 3 intentos. Si acertamos la clave, saldremos directamente del programa.

#include<iostream>
using namespace std;


int main() {
	float contador;
	string contrasena, nombre;
	bool password;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL SOLO TENDREMOS 3 OPORTUNIDADES PARA INGRESAR UNA CONTRASEÑA" << endl;
	cout << "--------------------------------" << endl;
	contador = 0;
	password = false;
	contrasena = "tuani";
	cout << "Estimado usuario para ingresar a su cuenta de EVIC ingrese su  primer nombre y apellido " << endl;
	cin >> nombre;
	while ((contador<3 && password==false)) {
		cout << "Ahora ingrese su clave. Recuerde que solo cuenta con 3 oportunidades" << endl;
		cin >> contrasena;
		if ((contrasena=="tuani")) {
			cout << "Bienvenido " << nombre << " a su cuenta educativa, no olvide cerrar sesion cuando haya terminado sus deberes" << endl;
			password = true;
		}
		contador = contador+1;
	}
	if ((contador==3 && password==false)) {
		cout << nombre << " ha agotado sus 3 intentos para introducir su contraseña, favor de intentarlo mas tarde" << endl;
	}
	return 0;
}

