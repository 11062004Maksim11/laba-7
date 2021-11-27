#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

int main()
{
	int x, k = 55445;
	cout << "Enter x =";
	cin >> x;
	float rez;
	float Z = 1;
	for (int n = 1; n < 6; n++)
	{
		Z =   Z  + log(n * x);
	}
	rez = tan(x)  + Z;
	cout << "Z = " << Z << endl;
	// Zmina Dla Laboratorki 7
	system("pause");
	return 0;
}

