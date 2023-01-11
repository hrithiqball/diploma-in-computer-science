// Lab 5 Question 4
#include <iostream>
using namespace std;
int main()
{
	int m, n, sum;

	cout << "Enter minimum value: ";
	cin >> m;
	cout << "Enter maximum value: ";
	cin >> n;

	while (m < n)
	{
		sum += m;
		m++;
	}
	sum += n;
	cout << "The summation of the specified range: " << sum;
}
