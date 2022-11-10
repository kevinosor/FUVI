// Una tienda ofrece un descuento del 15% sobre el total de la compra durante el mes de febrero. Dado un mes y un importe (monto), calcular cuál es la
// cantidad que se debe cobrar al cliente.

#include<iostream>
using namespace std;


int main() {
	float descmes, descuento, totalcompra;
	bool mes;
	
	descuento = 15;
	mes = true;
	mes = false;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL NOS DIRA SI RESIVOS UN DESCUENTO O NO" << endl;
	cout << "--------------------------------" << endl;
	cout << "Estimado cliente escriba el monto total de sus compras en nuestra tienda" << endl;
	cin >> totalcompra;
	cout << "Estimado cliente nuestra tienda esta ofreciendo un descuento de 15% aquellos que hayan realizado sus compras en el mes de febrero" << endl;
	cout << "Escriba Verdadero si vino en el mes de febrero y falso para no" << endl;
	cin >> mes;
	if ((mes==true)) {
		descmes = totalcompra*descuento/100;
		cout << "Estimado cliente, debido a que vino hacer sus compras a nuestra tienda en el mes de FEBRERO se le aplicara un descuento del 15% en sus compras" << endl;
		cout << "Ahora su total a pagar es de: " << descmes << endl;
		cout << "GRACIAS POR PREFERIRNOS" << endl;
	} else {
		if ((mes==false)) {
			cout << " Estimado cliente, las compras que realizo en nuestras tiendas fueron realizas en otro mes, por ende no se le aplicara el descuento " << endl;
			cout << "Total a pagar es de: " << totalcompra << endl;
			cout << "GRACIAS POR PREFERIRNOS." << endl;
		}
	}
	return 0;
}

