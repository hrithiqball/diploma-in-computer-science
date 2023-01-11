// Q1 Minimum Exercise
#include <iostream>
using namespace std;
int main()
{
	int number, min = 0;
	cin >> number;
	min = number;

	int i = 1;
	while (i < 4)
	{
		cin >> number;
		if (number < min)
			min = number;
		i++;
	}
	cout << "Minimum number is :" << min;
}
