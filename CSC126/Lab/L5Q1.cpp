// L5Q1
#include <iostream>
using namespace std;
int main()
{
	int number, sum, num = 0;

	cout << "Please enter five number :" << endl;

	while (num < 5)
	{
		cin >> number;
		sum += number;
		num++;
	}

	cout << "Summation is " << sum << " and average is " << (sum / num);
}
