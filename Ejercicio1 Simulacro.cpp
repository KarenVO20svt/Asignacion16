#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	
	int n, k, j, i = 1;
	double a;
	double suma = 0;
	
	do
	{
		cout << "Ingrese el valor de n: " << endl;
		cin >> n;

		if (n >= 1)
		{
			do
			{
				cout << "Ingrese el valor de a: " << endl;
				cin >> a;

				if (a >= 1 && a <= 6)
				{
					while (i <= n)
					{
						if (i == 1)
						{
							suma = 1 / a;
							i++;
							continue;
						}
						suma = suma + 1 / (pow(2, i)*a);
						i++;
					}
					cout << endl;
					cout << "Suma: " << suma << endl; 

					_getch();
				
				}
				else
				{
					cout << "Ingrese nuevamente el valor de a" << endl;
					j = 2;
				}

			} while (j == 2);

		}
		if (n == 0)
		{
			cout << "Suma: " << 0 << endl;
		}
		if (n < 0)
		{
			cout << "Ingrese nuevamente el valor de n" << endl;
			k = 1;
		}
	} while (k == 1);

	_getch();

}