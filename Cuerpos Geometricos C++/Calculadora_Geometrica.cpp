
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float alfa, altura, area, areabase, areac, areah;
	float arealateral, areamayor, areamenor, areatotal;
	float areaz, arista, caras, diagonal, g, h, r, hcaras;
	float lon, longi, lonmayor, lonmenor;
	float perimay, perimen, perimetrobase, perimtrobase;
	float pmayor, pmenor, profundidad, rmayor, rprima;
	float volumen, volumenc;
	int x, opciones, lados;
	
	cout << "Que figura desea calcular: " << endl;
	cout << "---------------------------------MENU DE OPCIONES---------------------------------" << endl;
	cout << "            Prisma: 1; Cilindro: 2; Piramide: 3; Cono: 4; Esfera: 5 " << endl;
	cout << "      Tetraedro: 6; Hexaedro: 7; Octaedro: 8; Dodecaedro: 9; Icosaedro: 10 " << endl;
	cout << "   Tronco de cono: 11; Tronco de piramide: 12; Huso esferico: 13; Ortoedro: 14 " << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cin >> opciones;
	switch (opciones) {
	case 1:
		cout << "Este algoritmo fue creado para saber cual es el area lateral, area total y el volumen de un prisma" << endl;
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area Lateral= 1; Area Total= 2; Volumen= 3 " << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA LATERAL DE UN PRISMA INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Cantidad de lados que posee el prisma:" << endl;
			cin >> lados;
			if ((lados<=0 || lados>4)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "La longitud de uno de los lados del prisma: " << endl;
				cin >> lon;
				if ((lon<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese la altura del prisma: " << endl;
					cin >> h;
					if ((h<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						perimetrobase = lados*lon;
						arealateral = perimetrobase*h;
						cout << "El perimetro de la base es: " << perimetrobase << endl;
						cout << "El area lateral del prisma es de: " << arealateral << endl;
					}
				}
			}
			break;
		case 2:
			cout << "PARA CONCER EL AREA TOTAL DE UN PRISMA INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Area de la base de la piramide: " << endl;
			cout << "Ingrese la longitud de uno de los lados de la base: " << endl;
			cin >> lon;
			if ((lon<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el área lateral del prisma: " << endl;
				cin >> arealateral;
				if ((arealateral<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					areabase = lon*lon;
					areatotal = (2*areabase)+arealateral;
					cout << "El area de la base es de: " << areabase << endl;
					cout << "El area total del prisma es de: " << areatotal << endl;
				}
			}
			break;
		case 3:
			cout << "PARA CONCER EL VOLUMEN DE UN PRISMA INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese la longitud de uno de los lados de la base: " << endl;
			cin >> lon;
			if ((lon<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese la altura del prisma: " << endl;
				cin >> h;
				if ((h<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					volumen = lon*lon*h;
					cout << "El volumen del prisma es de: " << volumen << endl;
				}
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	case 2:
		cout << "Este algoritmo fue creado para saber cual es el area lateral, area total y el volumen de un cilindro" << endl;
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area Lateral= 1; Area Total= 2; Volumen= 3 " << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA LATERAL DEL CILINDRO INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese la altura del cilindro: " << endl;
			cin >> h;
			if ((h<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				if ((h>0)) {
					cout << "Ingrese el radio del cilindro: " << endl;
					cin >> r;
					if ((r<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						arealateral = 2*3.14*h*r;
						cout << "El area lateral del cilindro es de: " << arealateral << endl;
					}
				}
			}
			break;
		case 2:
			cout << "PARA CONCER EL AREA TOTAL DEL CILINDRO INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el área lateral del cilindro: " << endl;
			cin >> arealateral;
			if ((arealateral<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingresa el radio del cilindro: " << endl;
				cin >> r;
				if ((r<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					areatotal = arealateral+2*(3.14*pow(r,2));
					cout << "El area total del cilindro es de: " << areatotal << endl;
				}
			}
			break;
		case 3:
			cout << "PARA CONCER EL VOLUMEN DEL CILINDRO INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el valor del radio del cilindro: " << endl;
			cin >> r;
			if ((r<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese la altura del cilindro: " << endl;
				cin >> h;
				if ((h<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					volumen = 3.14*pow(r,2)*h;
					cout << "El volumen del cilindro es de: " << volumen << endl;
				}
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	case 3:
		cout << "Este algoritmo fue creado para saber cual es el area lateral, area total y el volumen de una piramide" << endl;
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area Lateral= 1; Area Total= 2; Volumen= 3 " << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA LATERAL DE UN CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Cantidad de lados que tiene la base de la piramide:" << endl;
			cin >> lados;
			if ((lados<=0 || lados>4)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "La longitud de uno de los lados de la base: " << endl;
				cin >> lon;
				if ((lon<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese la altura de una de las caras laterales de la piramide: " << endl;
					cin >> hcaras;
					if ((hcaras<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						perimetrobase = lados*lon;
						arealateral = perimetrobase*hcaras/2;
						cout << "El perimetro de la base es: " << perimetrobase << endl;
						cout << "El area lateral de la piramide es de: " << arealateral << endl;
					}
				}
			}
			break;
		case 2:
			cout << "PARA CONCER EL AREA TOTAL DE LA PIRAMIDE INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Area de la base de la piramide: " << endl;
			cout << "Ingrese la longitud de uno de los lados de la base: " << endl;
			cin >> lon;
			if ((lon<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el área lateral de la piramide: " << endl;
				cin >> arealateral;
				if ((arealateral<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					areabase = lon*lon;
					areatotal = areabase+arealateral;
					cout << "El area de la base es: " << areabase << endl;
					cout << "El area total de la piramide es de: " << areatotal << endl;
				}
			}
			break;
		case 3:
			cout << "PARA CONCER EL VOLUMEN DEL CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese la longitud de uno de los lados de la base: " << endl;
			cin >> lon;
			if ((lon<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese la altura de la piramide: " << endl;
				cin >> h;
				if ((h<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					volumen = lon*lon*h/3;
					cout << "El volumen de la piramide es de: " << volumen << endl;
				}
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	case 4:
		cout << "Este algoritmo fue creado para saber cual es el area lateral, area total y el volumen de un cono" << endl;
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area Lateral= 1; Area Total= 2; Volumen= 3 " << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA LATERAL DE UN CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese la generatriz del cono: " << endl;
			cin >> g;
			if ((g<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				if ((g>0)) {
					cout << "Ingrese el radio del cono: " << endl;
					cin >> r;
					if ((r<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						arealateral = 3.14*g*r;
						cout << "El area lateral del cono es de: " << arealateral << endl;
					}
				}
			}
			break;
		case 2:
			cout << "PARA CONCER EL AREA TOTAL DEL CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el área lateral del cono: " << endl;
			cin >> arealateral;
			if ((arealateral<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingresa el radio del cono: " << endl;
				cin >> r;
				if ((r<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					areatotal = arealateral+(3.14*pow(r,2));
					cout << "El area total del cono es de: " << areatotal << endl;
				}
			}
			break;
		case 3:
			cout << "PARA CONCER EL VOLUMEN DEL CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el valor del radio del cono: " << endl;
			cin >> r;
			if ((r<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese la altura del cono: " << endl;
				cin >> h;
				if ((h<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					volumen = 3.14*pow(r,2)*h/3;
					cout << "El volumen del cono es de: " << volumen << endl;
				}
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	case 5:
		cout << "Este algoritmo fue creado para saber cual es el area, volumen, zona esferica y casquete esferico de una esfera" << endl;
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area= 1; Volumen= 2; Zona esferica= 3; Casquete esferico= 4 " << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA DE UNA ESFERA INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el radio de la esfera: " << endl;
			cin >> r;
			if ((r<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				area = 4*3.14*pow(r,2);
				cout << "El area de la esfera es de: " << area << endl;
			}
			break;
		case 2:
			cout << "PARA CONCER EL VOLUMEN DE UNA ESFERA INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el radio de la esfera: " << endl;
			cin >> r;
			if ((r<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				volumen = 4/3*3.14*pow(r,3);
				cout << "El volumen de la esfera es de: " << volumen << endl;
			}
			break;
		case 3:
			cout << "------------------------MENU DE OPCIONES------------------------" << endl;
			cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
			cout << "Area de la zona esferica= 1; Volumen de la zona esferica= 2; " << endl;
			cout << "----------------------------------------------------------------" << endl;
			cin >> x;
			cout << " " << endl;
			switch (x) {
			case 1:
				cout << "PARA CONCER EL AREA DE UNA ZONA ESFERICA INGRESE LOS SIGUIENTES DATOS: " << endl;
				cout << "Ingrese el radio mayor de la esfera: " << endl;
				cin >> rmayor;
				if ((rmayor<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese la altura de la zona esferica: " << endl;
					cin >> h;
					if ((h<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						areaz = 2*3.14*rmayor*h;
						cout << "El area de la zona esferica es de: " << areaz << endl;
					}
				}
				break;
			case 2:
				cout << "PARA CONCER EL VOLUMEN DE UNA ZONA ESFERICA INGRESE LOS SIGUIENTES DATOS: " << endl;
				cout << "Ingrese el radio de la zona esferica: " << endl;
				cin >> r;
				if ((r<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese la radio prima de la zona esferica: " << endl;
					cin >> rprima;
					if ((rprima<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						cout << "Ingrese la altura de la zona esferica: " << endl;
						cin >> h;
						if ((h<=0)) {
							cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
						} else {
							volumen = 3.14*h*(pow(h,2)+(3*pow(r,2))+(3*pow(rprima,3)))/6;
							cout << "El volumen de la zona esferica es de: " << endl;
						}
					}
				}
				break;
			default:
				cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
			}
			break;
		case 4:
			cout << "------------------------MENU DE OPCIONES------------------------" << endl;
			cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
			cout << "Area del casquete esferico= 1; Volumen del casquete esferico= 2; " << endl;
			cout << "----------------------------------------------------------------" << endl;
			cin >> x;
			cout << " " << endl;
			switch (x) {
			case 1:
				cout << "PARA CONCER EL AREA DEl CASQUETE ESFERICO INGRESE LOS SIGUIENTES DATOS: " << endl;
				cout << "Ingrese el radio mayor de la esfera: " << endl;
				cin >> rmayor;
				if ((rmayor<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese la altura del casquete esferico: " << endl;
					cin >> h;
					if ((h<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						areaz = 2*3.14*rmayor*h;
						cout << "El area del casquete esferico es de: " << areac << endl;
					}
				}
				break;
			case 2:
				cout << "PARA CONCER EL VOLUMEN DEL CASQUETE ESFERICO INGRESE LOS SIGUIENTES DATOS: " << endl;
				cout << "Ingrese el radio de la zona esferica: " << endl;
				cin >> r;
				if ((r<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese la altura de la zona esferica: " << endl;
					cin >> h;
					if ((h<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						volumen = 3.14*pow(h,2)*((3*r)-h)/3;
						cout << "El volumen del casquete esferico es de: " << endl;
					}
				}
				break;
			default:
				cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	case 6:
		cout << "Este algoritmo fue creado para saber cual es el area, volumen y altura de un tetraedro" << endl;
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area= 1; Volumen= 2; Altura=3 " << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA DE UN TETRAEDRP INGRESE EL SIGUIENTE DATO: " << endl;
			cout << "Ingrese el valor de una arista del tetraedro: " << endl;
			cin >> arista;
			if ((arista<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
				area = 1.73*pow(arista,2);
				caras = area/3;
				cout << "El area de cada unas de las caras del tetraedro es de: " << caras << endl;
				cout << "El area del tetraedro es de: " << area << endl;
			}
			break;
		case 2:
			cout << "PARA CONCER EL VOLUMEN UN TETRAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
			cout << "Ingrese el valor de una arista del tetraedro: " << endl;
			cin >> arista;
			if ((arista<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
				volumen = 0.12*pow(arista,3);
				cout << "El volumen del tetraedro es de: " << volumen << endl;
			}
			break;
		case 3:
			cout << "PARA CONCER LA ALTURA DE UN TETRAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
			cout << "Ingrese el valor de una arista del tetraedro: " << endl;
			cin >> arista;
			if ((arista<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
				altura = arista*0.81;
				cout << "La altura del tetraedro es de: " << altura << endl;
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	case 7:
		cout << "Este algoritmo fue creado para saber cual es el area, volumen y diagonal de un hexaedro" << endl;
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area= 1; Volumen= 2; Diametro: 3" << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA DE UN HEXAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
			cout << "Ingrese el valor de una arista del hexaedro: " << endl;
			cin >> arista;
			if ((arista<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				area = 6*pow(arista,2);
				caras = area/6;
				cout << "El area de cada unas de las caras del hexaedro es de: " << caras << endl;
				cout << "El area del hexaedro es de: " << area << endl;
			}
			break;
		case 2:
			cout << "PARA CONCER EL VOLUMEN UN HEXAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
			cout << "Ingrese el valor de una arista del hexaedro: " << endl;
			cin >> arista;
			if ((arista<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				volumen = pow(arista,3);
				cout << "El volumen del hexaedro es de: " << volumen << endl;
			}
			break;
		case 3:
			cout << "PARA CONCER LA DIAGONAL DE UN HEXAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
			cout << "Ingrese el valor de una arista del hexaedro: " << endl;
			cin >> arista;
			if ((arista<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				diagonal = arista*1.73;
				cout << "La diagonal del hexaedro es de: " << diagonal << endl;
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	case 8:
		cout << "Este algoritmo fue creado para saber cual es el area y el volumen de un octaedro" << endl;
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area= 1; Volumen= 2 " << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA DE UN OCTAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
			cout << "Ingrese el valor de una arista del octaedro: " << endl;
			cin >> arista;
			if ((arista<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
				area = 2*1.73*pow(arista,2);
				caras = area/8;
				cout << "El area de cada unas de las caras del octaedro es de: " << caras << endl;
				cout << "El area del octaedro es de: " << area << endl;
			}
			break;
		case 2:
			cout << "PARA CONCER EL VOLUMEN UN OCTAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
			cout << "Ingrese el valor de una arista del octaedro: " << endl;
			cin >> arista;
			if ((arista<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
				volumen = 0.47*pow(arista,3);
				cout << "El volumen del octaedro es de: " << volumen << endl;
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	case 9:
		cout << "Este algoritmo fue creado para saber cual es el area y el volumen de un dodecaedro" << endl;
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area= 1; Volumen= 2 " << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA DE UN DODECAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
			cout << "Ingrese el valor de una arista del dodecaedro: " << endl;
			cin >> arista;
			if ((arista<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
				area = 3*pow(arista,2)*6.88;
				caras = area/20;
				cout << "El area de cada unas de las caras del dodecaedro es de: " << caras << endl;
				cout << "El area del dodecaedro es de: " << area << endl;
			}
			break;
		case 2:
			cout << "PARA CONCER EL VOLUMEN DODECAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
			cout << "Ingrese el valor de una arista del dodecaedro: " << endl;
			cin >> arista;
			if ((arista<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
				volumen = 30.68*pow(arista,3)/4;
				cout << "El volumen del dodecaedro es de: " << volumen << endl;
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	case 10:
		cout << "Este algoritmo fue creado para saber cual es el area y el volumen de un icosaedro" << endl;
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area= 1; Volumen= 2 " << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA DE UN ICOSAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
			cout << "Ingrese el valor de una arista del icosaedro: " << endl;
			cin >> arista;
			if ((arista<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
				area = 5*1.73*pow(arista,2);
				caras = area/20;
				cout << "El area de cada unas de las caras del icosaedro es de: " << caras << endl;
				cout << "El area del icosaedro es de: " << area << endl;
			}
			break;
		case 2:
			cout << "PARA CONCER EL VOLUMEN UN ICOSAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
			cout << "Ingrese el valor de una arista del icosaedro: " << endl;
			cin >> arista;
			if ((arista<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				// NOTA: vi algunos videos en YouTube y supe que las ecuaciones originales se podian simplificar
				volumen = 0.417*5.24*pow(arista,3);
				cout << "El volumen del icosaedro es de: " << volumen << endl;
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	case 11:
		cout << "Este algoritmo fue creado para saber cual es el area lateral, area total y el volumen de un tronco de cono" << endl;
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area Lateral= 1; Area Total= 2; Volumen= 3 " << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA LATERAL DE UN TRONCO DE CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese la generatriz del tronco de cono: " << endl;
			cin >> g;
			if ((g<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el valor del radio menor del tronco de cono: " << endl;
				cin >> r;
				if ((r<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese el valor del radio mayor del tronco de cono: " << endl;
					cin >> rmayor;
					if ((rmayor<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						arealateral = 3.14*g*(rmayor+r);
						cout << "El area lateral del tronco de cono es de: " << arealateral << endl;
					}
				}
			}
			break;
		case 2:
			cout << "PARA CONCER EL AREA TOTAL DEL TRONCO DE CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el área lateral del tronco de cono: " << endl;
			cin >> arealateral;
			if ((arealateral<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingresa el valor del radio menor del tronco de cono: " << endl;
				cin >> r;
				if ((r<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese el valor del  radio mayor del tronco de cono: " << endl;
					cin >> rmayor;
					if ((rmayor<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						areamenor = 3.14*pow(r,2);
						areamayor = 3.14*pow(rmayor,2);
						areatotal = arealateral+areamenor+areamayor;
						cout << "El area total del tronco de cono es de: " << areatotal << endl;
					}
				}
			}
			break;
		case 3:
			cout << "PARA CONCER EL VOLUMEN DEL TRONCO DE CONO INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el valor del radio menor del tronco de  cono: " << endl;
			cin >> r;
			if ((r<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el valor del radio mayor del tronco de cono: " << endl;
				cin >> rmayor;
				if ((rmayor<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese la altura del tronco de cono: " << endl;
					cin >> h;
					if ((h<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						volumen = 3.14*h*(pow(rmayor,2)+pow(r,2)+rmayor+r)/3;
						cout << "El volumen del tronco de cono es de: " << volumen << endl;
					}
				}
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	case 12:
		cout << "Este algoritmo fue creado para saber cual es el area lateral, area total y el volumen de un tronco de piramide" << endl;
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area Lateral= 1; Area Total= 2; Volumen= 3 " << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA LATERAL DEL TRONCO DE PIRAMIDE INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el perimetro menor del tronco de piramide: " << endl;
			cin >> pmenor;
			if ((pmenor<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el valor del perimetro mayor del tronco de piramide: " << endl;
				cin >> pmayor;
				if ((pmayor<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese la altura del tronco de piramide: " << endl;
					cin >> h;
					if ((h<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						perimen = pmenor*4;
						perimay = pmayor*4;
						arealateral = (perimen+perimay)*h/2;
						cout << "El area lateral del tronco de piramide es de: " << arealateral << endl;
					}
				}
			}
			break;
		case 2:
			cout << "PARA CONCER EL AREA TOTAL DEL TRONCO DE PIRAMIDE INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el área lateral del tronco de piramide: " << endl;
			cin >> arealateral;
			if ((arealateral<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingresa el valor de una de las longitudes del perimetro menor del tronco de piramide: " << endl;
				cin >> lonmenor;
				if ((lonmenor<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingresa el valor de una de las longitudes del perimetro mayor del tronco de piramide: " << endl;
					cin >> lonmayor;
					if ((lonmayor<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						areamayor = lonmayor*lonmayor;
						areamenor = lonmenor*lonmenor;
						areatotal = arealateral+areamenor+areamayor;
						cout << "El area total del tronco de piramide es de: " << areatotal << endl;
					}
				}
			}
			break;
		case 3:
			cout << "PARA CONCER EL VOLUMEN DEL TRONCO DE PIRAMIDE INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el valor del area de la base del perimetro mayor del tronco de piramide: " << endl;
			cin >> areamayor;
			if ((areamayor<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el valor del area de la base del perimetro menor del tronco de piramide: " << endl;
				cin >> areamenor;
				if ((areamenor<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese el perimetro menor del tronco de piramide: " << endl;
					cin >> pmenor;
					if ((pmenor<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						cout << "Ingrese el valor del perimetro mayor del tronco de piramide: " << endl;
						cin >> pmayor;
						if ((pmayor<=0)) {
							cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
						} else {
							cout << "Ingrese la altura del tronco de piramide: " << endl;
							cin >> h;
							if ((h<=0)) {
								cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
							} else {
								volumen = (areamayor+areamenor+(pmenor*pmayor))*h/3;
								cout << "El volumen del tronco de piramide es de: " << volumen << endl;
							}
						}
					}
				}
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	case 13:
		cout << "Este algoritmo fue creado para saber cual es el area del huso esferico y el volumen de la cuña esferica " << endl;
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area= 1; Volumen= 2; " << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA DEl HUSO ESFERICO INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el radio de la esfera: " << endl;
			cin >> r;
			if ((r<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el angulo del huso esferico : " << endl;
				cin >> alfa;
				if ((alfa<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					areah = 3.14*pow(r,2)*alfa/90;
					cout << "El area del huso esferico es de: " << areah << endl;
				}
			}
			break;
		case 2:
			cout << "PARA CONCER EL VOLUMEN DE LA CUÑA ESFERICA INGRESE LOS SIGUIENTES DATOS: " << endl;
			cout << "Ingrese el radio de la esfera: " << endl;
			cin >> r;
			if ((r<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el angulo de la cuña esferica : " << endl;
				cin >> alfa;
				if ((alfa<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					volumenc = 3.14*pow(r,3)*alfa/270;
					cout << "El volumen de la cuña esferica es de: " << volumenc << endl;
				}
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	case 14:
		cout << "Este algoritmo fue creado para saber cual es el area, volumen y diagonal de un ortoedro" << endl;
		cout << "------------------------MENU DE OPCIONES------------------------" << endl;
		cout << "INDIQUENOS QUE DE DESEA SABER: " << endl;
		cout << "Area= 1; Volumen= 2; Diagonal: 3" << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> x;
		cout << " " << endl;
		switch (x) {
		case 1:
			cout << "PARA CONCER EL AREA DE UN ORTOEDRO INGRESE EL SIGUIENTE DATO: " << endl;
			cout << "Ingrese el valor de la altura del ortoedro: " << endl;
			cin >> altura;
			if ((altura<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el valor de la longitud del ortoedro: " << endl;
				cin >> longi;
				if ((longi<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese el valor de la profundidad del ortoedro: " << endl;
					cin >> profundidad;
					if ((profundidad<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						area = 2*((altura*longi)+(altura*profundidad)+(longi*profundidad));
						caras = area/6;
						cout << "El area de cada unas de las caras del ortoedro es de: " << caras << endl;
						cout << "El area del ortoedro es de: " << area << endl;
					}
				}
			}
			break;
		case 2:
			cout << "PARA CONCER EL VOLUMEN UN HEXAEDRO INGRESE EL SIGUIENTE DATO: " << endl;
			cout << "Ingrese el valor de la altura del ortoedro: " << endl;
			cin >> altura;
			if ((altura<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el valor de la longitud del ortoedro: " << endl;
				cin >> longi;
				if ((longi<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese el valor de la profundidad del ortoedro: " << endl;
					cin >> profundidad;
					if ((profundidad<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						volumen = altura*longi*profundidad;
						cout << "El volumen del ortoedro es de: " << volumen << endl;
					}
				}
			}
			break;
		case 3:
			cout << "Ingrese el valor de la altura del ortoedro: " << endl;
			cin >> altura;
			if ((altura<=0)) {
				cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
			} else {
				cout << "Ingrese el valor de la longitud del ortoedro: " << endl;
				cin >> longi;
				if ((longi<=0)) {
					cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
				} else {
					cout << "Ingrese el valor de la profundidad del ortoedro: " << endl;
					cin >> profundidad;
					if ((profundidad<=0)) {
						cout << "ERROR, TIPO DE VARIABLE NO ADMITIDA" << endl;
					} else {
						diagonal = sqrtf(pow(altura,2)+pow(longi,2)+pow(profundidad,2));
						cout << "La diagonal del ortoedro es de: " << diagonal << endl;
					}
				}
			}
			break;
		default:
			cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
		}
		break;
	default:
		cout << "TIPO DE VARIABLE NO ADMITIDA" << endl;
	}
	return 0;
}
