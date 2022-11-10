
#include<iostream>
using namespace std;

int main() {
	int cantresis;
	float r1, r2, r3, r4, r5, r6;
	float rtotal;
	int tipocircuito;
	
	cout << "Que tipo de ckto desea calcular: " << endl;
	cout << "-------------------------MENU DE OPCIONES-------------------------" << endl;
	cout << "                 Ckto Serie: 1; Ckto Paralelo: 2 " << endl;
	cout << "------------------------------------------------------------------" << endl;
	cin >> tipocircuito;
	switch (tipocircuito) {
	case 1:
		cout << "¿Cuantas resistencias posee su circuito en serie?: " << endl;
		cin >> cantresis;
		if ((cantresis<2 || cantresis>=7)) {
			cout << "ERROR, HA INGRESADO UN VALOR NO ADMITIDO O HA EXEDIDO EL LIMITE DE RESISTENCIAS" << endl;
		} else {
			switch (cantresis) {
			case 2:
				cout << "Ingresar el valor de la primera resistencias: " << endl;
				cin >> r1;
				if ((r1<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingresar el valor de la segunda  resistencias: " << endl;
					cin >> r2;
					if ((r2<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						rtotal = r1+r2;
						cout << "El valor total del ckto es de: " << rtotal <<"Ohms" << endl;
					}
				}
				break;
			case 3:
				cout << "Ingresar el valor de la primera resistencias: " << endl;
				cin >> r1;
				if ((r1<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingresar el valor de la segunda resistencias: " << endl;
					cin >> r2;
					if ((r2<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						cout << "Ingresar el valor de la tercera resistencia: " << endl;
						cin >> r3;
						if ((r3<=0)) {
							cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
						} else {
							rtotal = r1+r2+r3;
							cout << "El valor total del ckto es de: " << rtotal <<"Ohms" << endl;
						}
					}
				}
				break;
			case 4:
				cout << "Ingresar el valor de la primera resistencias: " << endl;
				cin >> r1;
				if ((r1<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingresar el valor de la segunda resistencias: " << endl;
					cin >> r2;
					if ((r2<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						cout << "Ingresar el valor de la tercera resistencia: " << endl;
						cin >> r3;
						if ((r3<=0)) {
							cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
						} else {
							cout << "Ingresar el valor de la cuarta variable: " << endl;
							cin >> r4;
							if ((r4<=0)) {
								cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
							} else {
								rtotal = r1+r2+r3+r4;
								cout << "El valor total del ckto es de: " << rtotal <<"Ohms" << endl;
							}
						}
					}
				}
				break;
			case 5:
				cout << "Ingresar el valor de la primera resistencias: " << endl;
				cin >> r1;
				if ((r1<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingresar el valor de la segunda resistencias: " << endl;
					cin >> r2;
					if ((r2<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						cout << "Ingresar el valor de la tercera resistencia: " << endl;
						cin >> r3;
						if ((r3<=0)) {
							cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
						} else {
							cout << "Ingresar el valor de la cuarta variable: " << endl;
							cin >> r4;
							if ((r4<=0)) {
								cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
							} else {
								cout << "Ingresar el valor de la quinta resistencias: " << endl;
								cin >> r5;
								if ((r5<=0)) {
									cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
								} else {
									rtotal = r1+r2+r3+r4+r5;
									cout << "El valor total del ckto es de: " << rtotal <<"Ohms" << endl;
								}
							}
						}
					}
				}
				break;
			case 6:
				cout << "Ingresar el valor de la primera resistencias: " << endl;
				cin >> r1;
				if ((r1<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingresar el valor de la segunda resistencias: " << endl;
					cin >> r2;
					if ((r2<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						cout << "Ingresar el valor de la tercera resistencia: " << endl;
						cin >> r3;
						if ((r3<=0)) {
							cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
						} else {
							cout << "Ingresar el valor de la cuarta variable: " << endl;
							cin >> r4;
							if ((r4<=0)) {
								cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
							} else {
								cout << "Ingresar el valor de la quinta resistencias: " << endl;
								cin >> r5;
								if ((r5<=0)) {
									cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
								} else {
									cout << "Ingresar el valor de la sexta resistencia: " << endl;
									cin >> r6;
									if ((r6<=0)) {
										cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
									} else {
										rtotal = r1+r2+r3+r4+r5+r6;
										cout << "El valor total del ckto es de: " << rtotal <<"Ohms" << endl;
									}
								}
							}
						}
					}
				}
				break;
			default:
				cout << "ERROR, VARIABLE NO ADMITIDA" << endl;
			}
		}
		break;
	case 2:
		cout << "Cuantas resistencias posee su circuito en paralelo: " << endl;
		cin >> cantresis;
		if ((cantresis<2 || cantresis>=7)) {
			cout << "ERROR, HA INGRESADO UN VALOR NO ADMITIDO O HA EXEDIDO EL LIMITE DE RESISTENCIAS" << endl;
		} else {
			switch (cantresis) {
			case 2:
				cout << "Ingresar el valor de la primera resistencias: " << endl;
				cin >> r1;
				if ((r1<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingresar el valor de la segunda  resistencias: " << endl;
					cin >> r2;
					if ((r2<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						rtotal = r1*r2/r1+r2;
						cout << "El valor total del ckto es de: " << rtotal <<"Ohms" << endl;
					}
				}
				break;
			case 3:
				cout << "Ingresar el valor de la primera resistencias: " << endl;
				cin >> r1;
				if ((r1<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingresar el valor de la segunda resistencias: " << endl;
					cin >> r2;
					if ((r2<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						cout << "Ingresar el valor de la tercera resistencia: " << endl;
						cin >> r3;
						if ((r3<=0)) {
							cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
						} else {
							rtotal = 1/1/r1+1/r2+1/r3;
							cout << "El valor total del ckto es de: " << rtotal <<"Ohms" << endl;
						}
					}
				}
				break;
			case 4:
				cout << "Ingresar el valor de la primera resistencias: " << endl;
				cin >> r1;
				if ((r1<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingresar el valor de la segunda resistencias: " << endl;
					cin >> r2;
					if ((r2<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						cout << "Ingresar el valor de la tercera resistencia: " << endl;
						cin >> r3;
						if ((r3<=0)) {
							cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
						} else {
							cout << "Ingresar el valor d la cuarta resistencia: " << endl;
							cin >> r4;
							if ((r4<=0)) {
								cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
							} else {
								rtotal = 1/1/r1+1/r2+1/r3+1/r4;
								cout << "El valor total del ckto es de: " << rtotal <<"Ohms" << endl;
							}
						}
					}
				}
				break;
			case 5:
				cout << "Ingresar el valor de la primera resistencias: " << endl;
				cin >> r1;
				if ((r1<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingresar el valor de la segunda resistencias: " << endl;
					cin >> r2;
					if ((r2<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						cout << "Ingresar el valor de la tercera resistencia: " << endl;
						cin >> r3;
						if ((r3<=0)) {
							cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
						} else {
							cout << "Ingresar el valor de la cuarta resistencia: " << endl;
							cin >> r4;
							if ((r4<=0)) {
								cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
							} else {
								cout << "Ingresar el valor de la quinta resistencia: " << endl;
								cin >> r5;
								if ((r5<=0)) {
									cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
								} else {
									rtotal = 1/1/r1+1/r2+1/r3+1/r4+1/r5;
									cout << "El valor total del ckto es de: " << rtotal <<"Ohms" << endl;
								}
							}
						}
					}
				}
				break;
			case 6:
				cout << "Ingresar el valor de la primera resistencias: " << endl;
				cin >> r1;
				if ((r1<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingresar el valor de la segunda resistencias: " << endl;
					cin >> r2;
					if ((r2<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						cout << "Ingresar el valor de la tercera resistencia: " << endl;
						cin >> r3;
						if ((r3<=0)) {
							cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
						} else {
							cout << "Ingresar el valor de la cuarta resistencia: " << endl;
							cin >> r4;
							if ((r4<=0)) {
								cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
							} else {
								cout << "Ingresar el valor de la quinta resistencia: " << endl;
								cin >> r5;
								if ((r5<=0)) {
									cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
								} else {
									cout << "Ingresar el valor de la sexta resistencia: " << endl;
									cin >> r6;
									if ((r6<=0)) {
										cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
									} else {
										rtotal = 1/1/r1+1/r2+1/r3+1/r4+1/r5+1/r6;
										cout << "El valor total del ckto es de: " << rtotal <<"Ohms" << endl;
									}
								}
							}
						}
					}
				}
				break;
			default:
				cout << "ERROR, VARIABLE NO ADMITIDA" << endl;
			}
		}
		break;
	default:
		cout << "ERROR, VARIABLE NO ADMITIDA" << endl;
	}
	return 0;
}

