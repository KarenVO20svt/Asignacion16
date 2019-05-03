#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	int n = 0;
	int k = 0;
	cout << "Ingrese el numero (N): " << endl;
	cin >> n;

	//Restricciones:
	// n < 10 && n > 0;

	int i, j = 0;
	do
	{
		if (n > 0 && n < 10)
		{
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= i; j++)
				{
					if (j == 1 || i == 1 || i == j || i == n)
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
			for (int i = n - 1; i >= 1; i--)
			{

				for (int j = n; j >= 1; j--)
				{

					if (j == 1 || i == j)
					{
						cout << "* ";
					}

					else
					{
						cout << "  ";
					}

				}

				cout << endl;

			}

			_getch();
		}
		else
			cout << "Ingrese nuevamente el numero" << endl;
	} while (k == 1);

	_getch();

}