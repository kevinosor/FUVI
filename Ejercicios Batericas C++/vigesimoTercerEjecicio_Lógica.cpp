// El siguiente es el menú de un restaurante de bocadillos. Diseñar un algoritmo capaz de leer el número de unidades consumidas de cada alimento ordenado y 
// calcular la cuenta total. Vamos a suponer que estos precios son fijos, es decir, que son: Bocadillo de jamón C$ 1,5, Refresco C$ 1,05, Cerveza C$ 0,75.

#include<iostream>
using namespace std;

int main() {
	int bocadillosjamon, cervezas, refrescos;
	float cuentatotal, preciocervezas, preciojamon, preciorefrescos, refresco;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EL CUAL NOS DIRA CUANTO CONSUMIMOS EN UN RESTUARANTE" << endl;
	cout << "--------------------------------" << endl;
	cout << "Cuenta - Restaurante COMIDA DELCIOSA" << endl;
	cout << "Estimado(a) cliente indique la cantidad de productos que consumio: " << endl;
	if ((bocadillosjamon<0 && refresco<0 && cervezas<0)) {
		cout << "ERROR, DATOS ERRONEOS" << endl;
	} else {
		if ((bocadillosjamon>=0 && refresco>=0 && cervezas>=0)) {
			cout << "Indique cuantos bocadillos de jamón consumio: " << endl;
			cin >> bocadillosjamon;
			cout << "Indique cuantos refrescos consumio: " << endl;
			cin >> refrescos;
			cout << "Indique cuantas cervezas consumio: " << endl;
			cin >> cervezas;
			preciojamon = 1.5;
			preciorefrescos = 1.05;
			preciocervezas = 0.75;
			cuentatotal = ((bocadillosjamon*preciojamon)+(refrescos*preciorefrescos)+(cervezas*preciocervezas));
			cout << "Su cuenta total es de: " << cuentatotal << " C$" << endl;
			cout << "GRACIAS POR PREFERIRNOS" << endl;
			cout << "Vuelva pronto" << endl;
		}
	}
	return 0;
}

