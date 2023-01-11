// Lab 8 Question 3
#include <iostream>
#include <cmath>
using namespace std;

void calBMI(float m, float kg);
int main()
{
	float m, kg;

	cout << "Enter height in m : ";
	cin >> m;
	cout << "Enter weight in kg : ";
	cin >> kg;
	return 0;
}

void calBMI(float m, float kg)
{
	float bmi = 0;
	bmi = kg / pow(m, 2);
}
