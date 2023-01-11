// Exercise counting Q2
#include <iostream>
using namespace std;
int main()
{
	int number, counter;

	int i = 0;
	while (i < 10)
	{
		cin >> number;
		if (number % 3 == 0 && number % 5 == 0)
			counter = counter + 1;
		i++;
	}
	cout << "The number that can divisible by 3 and 5 are " << counter;
}
