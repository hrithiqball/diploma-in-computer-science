// Lab 5 Question 2
#include <iostream>
using namespace std;
int main()
{
	int number, sum = 0, num = 0;

	cout << "Please enter five number :" << endl;

	while (num < 5)
	{
		cin >> number;
		if (number % 2 == 0)
			sum += number;
		num++;
	}

	cout << "Total sum of even number is " << sum;
}
