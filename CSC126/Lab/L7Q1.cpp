// Lab 7 Question 1
#include <iostream>
using namespace std;
int main()
{
	float average, number = 0, total;
	int counter = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter number : ";
		cin >> number;
		total += number;
		counter++;
	}
	average = total / counter;
	cout << "Average for 5 number is " << average;
}
