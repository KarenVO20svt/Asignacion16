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
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == 0 || i == (n - 1) || j == 0 || j == (n - 1))
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
		
		_getch();
	
}