// Crea un programa que pedir� al usuario los 3 lados de un tri�ngulo. El programa debe de categorizar este tri�ngulo como equil�tero, is�sceles o escaleno.

#include <iostream>
using namespace std;

void main() {
	int ladoUno, ladoDos, ladoTres;

	cout << "Dame los tres lados de un triangulo: " << endl;
	cin >> ladoUno >> ladoDos >> ladoTres;

	if (ladoUno == ladoDos && ladoDos == ladoTres) {
			cout << "Este triangulo es equilatero";

		}
		else if (ladoUno == ladoDos || ladoDos == ladoTres || ladoUno ==ladoTres ){
			cout << "El triangulo es Isosceles";
		

	}
	else {
		cout << "El triangulo es escaleno";
	}
	
}