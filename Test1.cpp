#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float pCost, fCost, inflation;
	int NumYear;
	cin >> pCost >> NumYear >> inflation;
	inflation = inflation / 100;
	for (int i = 0; i < NumYear; i++)
	{
		pCost = pCost*( 1 + inflation);
		fCost = pCost;
	}
	cout << fixed << setprecision(2);
	cout << fCost << endl;
}
