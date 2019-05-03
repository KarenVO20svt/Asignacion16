#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	//Entrada
	double a, k;
	double resultado = 0;
	double i = 1;
	double N = 0;
	double D = 1;
	double factorial = 1;
	double div = 0;

	//Logica
	cout << "Ingrese el valor de k: " << endl;
	cin >> k;

	while (k > 20)
	{
		cout << "Ingrese el valor de k: " << endl;
		cin >> k;
	}
	cout << "Ingrese el valor de a: " << endl;
	cin >> a;

	do 
	{
		N = pow(a, i); 
		i++;

		D = D * factorial;
		factorial++;

		div = N / D; 

		resultado = resultado + div;

	} while (i <= k);

	cout << "El resultado es: " << resultado + 1 << endl; 

	_getch();
}
