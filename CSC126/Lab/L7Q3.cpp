// Lab 7 Question 3
#include <iostream>
using namespace std;
int main()
{
	int number, factorial = 1;
	cout << "Enter positive integer: ";
	cin >> number;

	for (int i = 1; i <= number; i++)
		factorial *= i;

	cout << "The factorial of " << number << " is " << factorial;
}
