#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main( )
{
	vector<int> a;
	vector<int> b;
	vector<int> :: reverse_iterator ri; // reverse iterator function will be used to print the reverse vector
	int j;
	int T_Num;
	cin >> T_Num;
	for (int i = 0; i < T_Num; i++)  // loop to assign the initial values to vector a
	{
		cin >> j;
		a.push_back(j);
		j = 0; 
	}
	for (int i = 0; i < T_Num ; i++) // stroing the sum of adjacent values of vec a to vec b
	{
		j = a[i] + a[i+1] + a[i+2];
		b.push_back(j);
		j = 0;
	}
	for (int i = 0; i< T_Num-2 ; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}
