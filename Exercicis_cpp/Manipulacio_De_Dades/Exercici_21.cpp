// Crea un programa que se le introduzca un d�a, un mes y un a�o y calcule cuantos segundos han pasado desde el 1 de enero del a�o 0.

#include <iostream>
using namespace std;

int main() {
	short anyo;
	short mes;
	short dia;

	cout << "Dime un a�o: " << endl;
	cin >> anyo;
	cout << "Dime un mes: " << endl;
	cin >> mes;
	cout << "Dime un dia: " << endl;
	cin >> dia;

	cout << "Ha pasado este tiempo en segundos: " << (anyo * 365 + ((mes - 1) * 30) + dia) * 24 * 3600 << " segundos.";


}