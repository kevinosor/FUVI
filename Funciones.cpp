/*
Nombre del archivo: constantes.cpp
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria

*/
#include<iostream>


using namespace std;
	//Prototipo de funcion
	void saludar() //Prototipo de funcion que no se retorna algun valor ni requiere un valor.
int main (){
	//Llamada o invocacion la(s) funciones
	string nombre;
	
	//Saludar
	cout << "Ingrese su nombre: " <<endl;
	cin >> nombre;
	otroSaludo(nombre)
	
	return 0;
}
//2- Definicion de funciones
void saludar(){
	cout << "Bienvenido a esta App." <<endl;
}
void saludar(string nombre){
	cout << "Bienvenido a esta app: " << nombre <<endl;
	saludar();
}