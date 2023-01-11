// Lab 7 Question 4
#include <iostream>
using namespace std;
int main()
{
	int num, max, min;

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter number: ";
		cin >> num;
		if (i == 0)
		{
			max = num;
			min = num;
		}
		else
		{
			if (num > max)
				max = num;
			if (num < min)
				min = num;
		}
	}
	cout << "Maximum number: " << max << endl
		 << "Minimum number: " << min;
}
