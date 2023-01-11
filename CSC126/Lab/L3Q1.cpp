// Lab 3 Programmer Harith Iqbal

#include <iostream>

using namespace std;

int main()
{
	float sideA, sideB;
	float area;

	cout << "Please enter the value of side A: ";
	cin >> sideA;
	cout << "Please enter the value of side B: ";
	cin >> sideB;

	area = ((sideA + sideB) / 2) * sideB;

	cout << "Area of the shaded region is: " << area;
}
