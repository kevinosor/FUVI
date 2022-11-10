// Determinar el precio de un billete de ida y vuelta por avión, conociendo la distancia a recorrer, el número de días de estancia y sabiendo que si ladistancia 
// es superior a 1000 Km, y el número de días de estancia es superior a 7, la línea aérea le hace un descuento del 30% (precio por kilómetro US$8.50).
#include<iostream>
using namespace std;

int main() {
	int dias, motivo, asiento;
	string nombre, pais, paisorigen;
	float clase_ejecutiva, clase_premiun_economy, clase_turista, descuento;
	float distancia, kmboleto, negocios, nuevoprecio;
	float otro_motivo, precioida, precioregreso, preciototal, preoriginal;
	float primera_clase, trabajo, turismo, visita_familiar;

	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL NOS APLICARA UN DECUSCUENTO DEL 30% EN UN BOLETO DE AVION SI SE CUMPLEN LAS CONDICIONES" << endl;
	cout << "--------------------------------" << endl;
	// Tipos de asiento
	primera_clase = 1;
	clase_ejecutiva = 2;
	clase_premiun_economy = 3;
	clase_turista = 4;
	// Motivos
	negocios = 1;
	turismo = 2;
	visita_familiar = 3;
	trabajo = 4;
	otro_motivo = 5;
	cout << "Estimado(a) pasajero(a). BIENVENIDO AL SISTEMA DE AEROLINEAS: American Airlines " << endl;
	cout << "Indiquenos su primer nombre y apellido: ";
	cin >> nombre;
	cout << "Indiquenos su pais de origen: ";
	cin >> paisorigen;
	cout << "Indiquenos que pais visitara: ";
	cin >> pais;
	cout << "Estimado(a) pasajero(a): " << nombre << " , ingrese los dias de estancia en el pais a visitar: ";
	cin >> dias;
	if ((dias<=0)) {
		cout << "ERROR, TIPO DE DATO NO ADMITIDO. INTENTELO NUEVAMENTE" << endl;
	} else {
		if ((dias>0)) {
			cout << "Ingrese la distancia a recorrer del viaje: ";
			cin >> distancia;
			cout << " " << endl;
			if ((distancia<=0 || distancia>=15000)) {
				cout << "ERROR, TIPO DE DATO NO ADMITIDO. INTENTELO NUEVAMENTE" << endl;
			} else {
				if ((distancia>0 || distancia<15000)) {
					cout << "Estimado(a) pasajero(a) para indicar el tipo de asiento que contraro en nuestra aerolinea " << endl;
					cout << "Le presentamos el menu de asientos que ofrece nuestra aerolina. Indique el tipo de asiento con el numero correspondiente: " << endl;
					cout << " " << endl;
					cout << "---------------------------------MENU DE ASIENTOS---------------------------------" << endl;
					cout << "Primera_Clase= 1; Clase_Ejecutiva= 2; Clase_Premiun_Economy= 3; Clase_Turista= 4 " << endl;
					cout << "----------------------------------------------------------------------------------" << endl;
					cout << "Indiquenos el tipo de clase de viaje que escogio: ";
					cin >> asiento;
					cout << " " << endl;
					if ((asiento<=0 || asiento>=5)) {
						cout << "ERROR, TIPO DE DATO NO ADMITIDO. INTENTELO NUEVAMENTE" << endl;
					} else {
						if ((asiento>0 || asiento<5)) {
							cout << "Estimado(a) pasajero(a) para indicar el motivo de su viaje" << endl;
							cout << "Le presentamos el menu de motivos de viaje. Indique su motivo con el numero correspondiente: " << endl;
							cout << "-----------------------------MENU DE MOTIVOS-----------------------------" << endl;
							cout << "Negocios= 1; Turismo= 2; Visita_Familiar= 3; Trabajo= 4; Otro_Motivo= 5 " << endl;
							cout << "-------------------------------------------------------------------------" << endl;
							cout << "Indiquenos el motivo de su viaje a " << pais << ": ";
							cin >> motivo;
							if ((motivo<=0 || motivo>=6)) {
								cout << "ERROR, TIPO DE DATO NO ADMITIDO. INTENTELO NUEVAMENTE" << endl;
							} else {
								if ((motivo>0 || motivo<6)) {
									kmboleto = 8.50;
									if ((dias>7 && distancia>1000)) {
										preoriginal = distancia*kmboleto;
										cout << "Total a pagar por boleto: " << preoriginal << endl;
										cout << "Estimado(a) pasajero(a) " << nombre << " al ser su estadia mayor a 7 dias y su recorrido mayor a los mil km" << endl;
										cout << "Le aplicaremos un descuento del 30% por lo tanto..." << endl;
										nuevoprecio = (distancia*kmboleto)*30/100;
										cout << "Su total a pagar ahora por su boleto es de: " << "U$" << nuevoprecio << endl;
										cout << "LE DESEAMOS BUEN VIAJE. GRACIAS POR PREFERIRNOS" << endl;
									} else {
										if ((dias<=7 && distancia<=1000)) {
											preoriginal = distancia*kmboleto;
											cout << "Total a pagar por boleto: " << preoriginal << endl;
											cout << "LE DESEAMOS BUEN VIAJE. GRACIAS POR PREFERIRNOS" << endl;
										}
									}
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

