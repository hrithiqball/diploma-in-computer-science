// L3Q2 by Harith Iqbal

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float sideB, rad;
	float areaSq, areaSR; // SR= Shaded Region
	const float PAI = 3.142;

	cout << "Please enter the value of side B: ";
	cin >> sideB;
	cout << "Please enter the value of rad   : ";
	cin >> rad;

	areaSq = sideB * sideB;
	areaSR = areaSq - (4 * (PAI * pow(rad, 2)));

	cout << "The area of the square is       : " << areaSq << endl;
	cout << "The area of the shaded region is: " << areaSR;
}
