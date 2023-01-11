// Question 3
#include <iostream>
using namespace std;
int main()
{
	int n, num = 0, sum = 0;

	cout << "Please enter a number :";
	cin >> n;

	while (num <= n)
	{
		sum += num;
		num++;
	}

	cout << "The sum is: " << sum;
}
