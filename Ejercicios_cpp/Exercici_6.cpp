// Crea un programa que reciba dos n�meros y ejecute las operaciones matem�ticas(suma, resta, multiplicaci�n, divisi�n, m�dulo) mostrando su resultado por pantalla.
#include <iostream>
using namespace std;

void main() {
	short numeroUno;
	short numeroDos;

	cout << "Dame dos numeros" << endl;
	cin >> numeroUno >> numeroDos;  

	cout << "Suma: " << numeroUno + numeroDos << "\t" << "Resta: " << numeroUno - numeroDos << "\t" << "Multiplicacion:	" << numeroUno * numeroDos << "\t" << "Division: " << numeroUno / numeroDos << "\t" << "Modulo: " << numeroUno % numeroDos;

}