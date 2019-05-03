#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	int n = 0;
	cout << "Ingrese el numero (N): " << endl;
	cin >> n;

	//Restricciones:
	// n < 10 && n > 0;

	int i, j = 0;
	if (n > 0 && n < 10)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j == 1 || j == n || i == 1 || i == j || i == n)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else
		cout << "Ingrese nuevamente el numero" << endl;

	_getch();

}