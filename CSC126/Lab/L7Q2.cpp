// Lab 7 Question 2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int product;

	cout << "N\t\t4^N" << endl;
	for (int n = 0; n <= 6; n++)
	{
		product = pow(4, n);
		cout << n << "\t\t" << product << endl;
	}
}
