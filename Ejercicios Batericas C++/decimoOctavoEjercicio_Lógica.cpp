// Leer tres números que denoten una fecha (día, mes, año). Comprobar que es una fecha válida. Si no es válida escribir un mensaje de error. Si es válida
// escribir la fecha cambiando el número del mes por su nombre. Ej. Si se introduce 1 2 2021, se deberá imprimir "1 de febrero de 2021". El año debe ser mayor que 0.

#include<iostream>
using namespace std;

int main() {
	int ano;
	int dia;
	int mes;
	
	cout << "ESTO ES UN EXPERIMENTO DE LOGICA, EN DONDE INGRESAREMOS UNA FECHA EN NUMERO Y AL FINAL IMPRIMIRA EL MES EN FORMA DE CADENA" << endl;
	cout << "--------------------------------" << endl;
	cout << "Ingrese los siguientes datos. Recuerde ingresar dia, mes y año en forma numerica" << endl;
	cout << "Ingrese el día correspondiente" << endl;
	cin >> dia;
	if ((dia>31 || dia<=0)) {
		cout << "ERROR. TIPO DE VARIABLE NO ADMITIDA" << endl;
	} else {
		if ((dia<=31 || dia>0)) {
			cout << "Ingrese el mes correspondiente" << endl;
			cin >> mes;
			if ((mes>12 || mes<=0)) {
				cout << "ERROR. TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				if ((mes<=12 || mes>=0)) {
					cout << "Ingrese el año correspondiente" << endl;
					cin >> ano;
					if ((ano<=0)) {
						cout << "ERROR. TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						if ((ano>0)) {
							cout << dia;
							if ((mes==1)) {
								cout << " de enero del ";
							} else {
								if ((mes==2)) {
									cout << " de febrero del ";
								} else {
									if ((mes==3)) {
										cout << " de marzo del ";
									} else {
										if ((mes==4)) {
											cout << " de abril del ";
										} else {
											if ((mes==5)) {
												cout << " de mayo del ";
											} else {
												if ((mes==6)) {
													cout << " de junio del ";
												} else {
													if ((mes==7)) {
														cout << " de julio del ";
													} else {
														if ((mes==8)) {
															cout << " de agosto del ";
														} else {
															if ((mes==9)) {
																cout << " de septiembre del ";
															} else {
																if ((mes==10)) {
																	cout << " de octubre del ";
																} else {
																	if ((mes==11)) {
																		cout << " de noviembre del ";
																	} else {
																		if ((mes==12)) {
																			cout << " de diciembre del ";
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
								}
							}
							cout << ano << endl;
						}
					}
				}
			}
		}
	}
	return 0;
}

