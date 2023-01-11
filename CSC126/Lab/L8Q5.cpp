// Lab 8 Question 5
#include <iostream>
#include <cmath>
using namespace std;

float calBMI(float m, float kg);
int main()
{
	float m, kg, bmi;
	cout << "Enter height in m : ";
	cin >> m;
	cout << "Enter mass in kg  : ";
	cin >> kg;
	bmi = calBMI(m, kg);
	cout << "User BMI is : " << bmi;
	return 0;
}

float calBMI(float m, float kg)
{
	float bmi = 0;
	bmi = kg / pow(m, 2);
	return bmi;
}
