/*
Nombre del archivo: constantes.cpp
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
Instrucciones: Ejemplo de la estructura de control condicional multiple switch
*/
#include <iostream>


using namespace std;

int main (){
	int op;
	int op1, cant, precio;
	cout << "Menu de opciones: " <<endl;
	cout << "1- Computadoras\n2- Smartphones\n3- Tablets\n4- Salir" <<endl;
	cout << "Seleccione una opcion: " <<endl;
	cin >> op;
	
	switch(op){
		case 1: 
		 cout << "Ud ha seleccionado: Computadoras" <<endl;
		 cout << "¿Que tipo de comútadora desea comprar?: " <<endl;
		 cout << "1- Desktop\n2- Hp\n3- Laptop" <<endl;
		 cout << "Seleccione una opcion" <<endl;
		 cin >> op1;
		 switch (op1){
		 	case 1: 
		 	cout << "Cantidad a comprar: ";
		 	cin >> cant;
		 	precio= 550.99;
		 	cout << "El monto a pagar es USD: " << cant * precio * 1.15 <<endl;
		 	cout << "Gracias por su compra" << endl;
		 	break;	
		 }
		 break;
		case 2:
		 cout << "Ud ha seleccionado: Smartphones" <<endl;
		 cout << "¿Que tipo de computadora desea comprar?: " <<endl;
		 cout << "1- Gama baja\n2- Gama media\n3- Gama alta" <<endl;
		 cout << "Seleccione una opcion: ";
		 cin >> op1;
		 break;
		case 3:
		 cout << "Ud ha seleccionado: Tablets" <<endl;
		 break;
		case 4:
		 cout << "Ud ha salido de la aplicacion correctamente" <<endl;
		 break;
		default:
		 cout << "Opcion incorrecta" <<endl;
		 cout << "Intentelo nuevamente" <<endl;
	}
	
	return 0;
}
