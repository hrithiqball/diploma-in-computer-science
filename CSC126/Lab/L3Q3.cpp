// Lab 3 Question 3 by Harith Iqbal

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float r1, r2;
	float areaSR;
	const float PAI = 3.142;

	cout << "Please enter the value of r1: ";
	cin >> r1;
	cout << "Please enter the value of r2: ";
	cin >> r2;

	areaSR = (PAI * pow(r1 + r2, 2)) - (PAI * pow(r1, 2));

	cout << "The area of shaded region is: " << areaSR;
}
