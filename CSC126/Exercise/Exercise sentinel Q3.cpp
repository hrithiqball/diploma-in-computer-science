// Exercise sentinel Q3
#include <iostream>
using namespace std;
int main()
{
	int number, counter3 = 0, counter5 = 0;

	number = 0;
	while (number != -1)
	{
		cout << "Enter number ";
		cin >> number;
		if (number % 3 == 0)
			counter3++;
		if (number % 5 == 0)
			counter5++;
	}
	cout << " There are " << counter3 << " numbers that can divisible by 3" << endl;
	cout << " There are " << counter5 << " numbers that can divisible by 5";
}
