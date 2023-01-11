// Lab 8 Question 1
#include <iostream>
#include <cmath>
using namespace std;

void calBMI();
int main()
{
	return 0;
}

void calBMI()
{
	float m, kg, bmi;

	cout << "Enter height : ";
	cin >> m;
	cout << "Enter weight : ";
	cin >> kg;

	bmi = kg / pow(m, 2);
}
