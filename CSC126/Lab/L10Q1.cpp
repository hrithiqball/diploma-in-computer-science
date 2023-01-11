// Programmer:Harith Iqbal Lab 10 Q1
#include <iostream>
using namespace std;
int main()
{
	int array[100];
	int num = 0, index = 0, sum = 0;

	while (num != -1)
	{
		cout << "Enter number : ";
		cin >> num;

		if (num >= 1 && num <= 50)
		{
			array[index] = num;
			index++;
		}
	}
	for (int c = 0; c < index; c++)
		sum += array[c];
	cout << "Sum is : " << sum;
}
