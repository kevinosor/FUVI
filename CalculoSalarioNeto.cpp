/*
Nombre del archivo: CalculoSalarioNeto.cpp0
Autor: Kevin Osorio
Lugar: Instituto Tecnológico Victoria
Instrucciones: Ejemplo de programación estructurada
*/
#include<iostream>
#include<iomanip>

using namespace std;

int main (){
	//Variables - Constantes
	const double TASA_ANTIGUEDAD= 15;
	const double TASA_SINDICATO= 1;
	const double TASA_INNS= 7;
	const double TASA_IR= 15.6;
	const double TASA_INSS_PATRONAL= 22.5;
	
	//Declaraciones de variables - Locales
	double salarioBasico, ingresoNeto, ingresoTotal, deduccionesTotales;
	double ingresoAntiguedad, INSS, IR, montoSindi, INSSpatronal;
	string nombre, apellido ;
	//Datos personales
	cout << "Ingrese su primer nombre" <<endl;
	cin >> nombre;
	cout << "Ingrese su primer apellido" <<endl;
	cin >> apellido;
	cout <<"Estimado empleado/a ingrese su salario básico" <<endl;
	cin >> salarioBasico;
	
	//Calculo de salario neto
	//Ingresos al empleado - 1era parte
	ingresoAntiguedad= salarioBasico * (TASA_ANTIGUEDAD/100);
	ingresoTotal= salarioBasico + ingresoAntiguedad;
	
	//Deducciones al empleado - 2da parte
	montoSindi= salarioBasico * (TASA_SINDICATO/100);
	INSS= ingresoTotal * (TASA_INNS/100);
	IR= ingresoTotal * (TASA_IR/100);
	deduccionesTotales= montoSindi + INSS + IR;
	
	//Salario neto del empleado - 3era parte
	ingresoNeto= ingresoTotal * (TASA_INSS_PATRONAL/100);
	
	//Deduccionnes a la empresa - 4ta parte
	INSSpatronal= ingresoTotal * (TASA_INSS_PATRONAL/100);
	
	//Resultados - 5ta parte 
	cout << "Nombre del empleado: " << nombre << setw(8) << apellido <<endl;
 	cout << "Su salario basico es de: " << salarioBasico <<endl;
	cout << "Ingresos totales son" <<endl;
	cout << "Su monto por antiguedad es de: " << ingresoAntiguedad <<endl;
	cout << "El monto de sus ingresos totales es de: " <<ingresoTotal <<endl;
	cout << "-----Deducciones totales al empleado-----" <<endl;
	cout << "Monto por sindicato es: " <<montoSindi <<endl;
	cout << "Monto de INSS= " <<INSS <<endl;
	cout << "Monto de IR= " <<IR <<endl;
	cout << "La deduccion total a su salario es de: " <<deduccionesTotales <<endl;
	cout << "-----Salario Neto-----" <<endl;
	cout << "Su salario neto es de: " <<ingresoNeto <<endl;
	cout << "-----Deducciones a la empresa-----" <<endl;
	cout << "La deduccion a la empresa es de: " << INSSpatronal <<endl;
	
	
	return 0;
}