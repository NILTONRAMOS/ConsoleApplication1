#include "stdafx.h"
#include<iostream>
using namespace std;

int main() {
	int entrada, d1, d2, d3, d4, d5, d6, N, e1, e2, t = 1;//  variables

	cout << "ingrese numero binario" << endl;// mensaje de ingreso de numero
	cin >> entrada;       //almacenamos el numero infresado en ENTRADA

						  /* extrayendo los digitos del numero de 6 cifras y asignandole a cada variable
						  su valor respectivo*/

	d1 = (entrada % 10);
	d2 = (entrada % 100) / 10;
	d3 = (entrada % 1000) / 100;
	d4 = (entrada % 10000) / 1000;
	d5 = (entrada % 100000) / 10000;
	d6 = (entrada / 100000);

	// comprobamos si el numero es de 6 digitos

	if (entrada>99999 && entrada<999999) {
		// comprobamos si los digitos del numeros son binario (1 o 0)

		if ((d1<2) && (d2<2) && (d3<2) && (d4<2) && (d5<2) && (d6<2)) {
			// llevamos a base 10 el numero ingresado

			N = (d6 * 32 + d5 * 16 + d4 * 8 + d3 * 4 + d2 * 2 + d1);
			cout << "en  base 10 : es:---->" << N << endl; // muestra el numero en base 10
			if (N<70) {
				// nuevamente extraemos los digitos del numero pero en base 10
				e1 = N % 10;
				e2 = N / 10;

				// mensajes de resultado

				if (e1<e2)
					cout << "el numero es decendente" << endl;
				if (e2<e1)
					cout << "el numero es acendente" << endl;
				if (e2 == e1)
					cout << "los numeros son iguales" << endl;
			}
		}

		// si los digitos del numero no son binarios hacemos

		else {
			cout << "digitos incorrectos " << endl;
			// condiciones para escribir la coma despues de un digito errado
			if (d6>1) {
				cout << t;
				if ((d5>1) || (d4>1) || (d3>1) || (d2>1) || (d1>1))
					cout << ",";
			}
			if (d5>1) {
				cout << t + 1;
				if ((d4>1) || (d3>1) || (d2>1) || (d1>1))
					cout << ",";
			}
			if (d4>1) {
				cout << t + 2;
				if ((d3>1) || (d2>1) || (d1>1))
					cout << ",";
			}
			if (d3>1) {
				cout << t + 3;
				if ((d2>1) || (d1>1))
					cout << ",";
			}
			if (d2>1) {
				cout << t + 4;
				if (d1>1)
					cout << ",";
			}
			if (d1>1)
				cout << t + 5;

		}
	}

	// condicion si el numero no es de 6 cifras
	else {

		cout << "el numero tiene que ser de 6 digitos �" << endl;
	}
	return 0;
	system("PAUSE");
}