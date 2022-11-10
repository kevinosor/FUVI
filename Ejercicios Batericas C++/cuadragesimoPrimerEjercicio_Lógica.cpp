// Diseñar un algoritmo que solicite la cantidad (en litros) de combustible a echar a un vehículo, y muestre el monto a pagar según la cantidad y el tipo de combustible 
// solicitado, tomando como referencia los siguientes datos: Gasolina regular C$32.85; Gasolina súper C$33.48 ;Diesel C$28.45

#include<iostream>
using namespace std;

int main() {
	float cantgasolina, preciofinal, tipogasolina;
	float diesel ,gasolina_regular, gasolina_super;
	string nombre;

	cout << "ESTO ES UN EXPERIMENTO DE LÓGICA, EL CUAL NOS MOSTRARA UN MENU DE GASOLINAS Y SUS PRECIOS Y AL FINAL NOS DIRA CUANTO PAGAREMOS DEPENDIENDO DE LA CANTIDAD Y EL TIPO DE GASOLINA" << endl;
	cout << "--------------------------------" << endl;
	cout << " " << endl;
	// tipos de gasolinas
	gasolina_regular = 1;
	gasolina_super = 2;
	diesel = 3;
	// Precios
	gasolina_regular = 32.85;
	gasolina_super = 33.48;
	diesel = 28.45;
	cout << "BIENVENIDO AL SISTEMA DE GASOLINERAS UNO " << endl;
	cout << "Estimado(a) cliente ingrese su nombre y apellido: " << endl;
	cin >> nombre;
	cout << "------------------------*MENU DE PRECIOS*-------------------------" << endl;
	cout << "Gasolina_Regular= 32.85; Gasolina_Super= 33.48; Diesel= 28.45 " << endl;
	cout << "------------------------------------------------------------------" << endl;
	cout << " " << endl;
	cout << "-------------------------*MENU DE TIPOS*-------------------------" << endl;
	cout << "Gasolina_Regular= 1; Gasolina_Super= 2; Diesel= 3" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cout << " " << endl;
	cout << "Indiquenos el tipo de gasolina a escoger " << endl;
	cin >> tipogasolina;
	cout << "Indiquenos cuantos litros desea comprar" << endl;
	cin >> cantgasolina;
	cout << " " << endl;
	if ((cantgasolina<=0 && tipogasolina<=0 || tipogasolina>4)) {
		cout << "ERROR, VARIABLE NO ACPETADA. INTENTELO NUEVAMENTE" << endl;
	} else {
		if ((cantgasolina>0 && tipogasolina==1)) {
			gasolina_regular = 32.85;
			preciofinal = cantgasolina*gasolina_regular;
			cout << "-----------------------------FACTURA-----------------------------" << endl;
			cout << "Estimad(a) cliente " << nombre << " su total a pagar es de: " << "C$" << preciofinal << endl;
			cout << "GRACIAS POR PREFERIR A GASOLINERA UNO, VUELVA PRONTO" << endl;
		} else {
			if ((cantgasolina>0 && tipogasolina==2)) {
				gasolina_super = 33.48;
				preciofinal = cantgasolina*gasolina_super;
				cout << "-----------------------------FACTURA-----------------------------" << endl;
				cout << "Estimad(a) cliente " << nombre << " su total a pagar es de: " << "C$" << preciofinal << endl;
				cout << "GRACIAS POR PREFERIR A GASOLINERA UNO, VUELVA PRONTO" << endl;
			} else {
				if ((cantgasolina>0 && tipogasolina==3)) {
					diesel = 33.48;
					preciofinal = cantgasolina*diesel;
					cout << "-----------------------------FACTURA-----------------------------" << endl;
					cout << "Estimad(a) cliente " << nombre << " su total a pagar es de: " << "C$" << preciofinal << endl;
					cout << "GRACIAS POR PREFERIR A GASOLINERA UNO, VUELVA PRONTO" << endl;
				}
			}
		}
	}
	cout << "------------------------------------------------------------------" << endl;
	return 0;
}

