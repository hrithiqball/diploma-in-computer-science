// Harith Iqbal Assignment Q1

#include <iostream>

using namespace std;

int main()

{
	float massKg;	 // input variable declaration
	float massPound; // output variable declaration
	const float POUND = 2.2;

	cout << "Please enter mass in Kilogram" << endl; // prompt message
	cin >> massKg;									 // input statement

	massPound = massKg * POUND;

	cout << "Your weight in Pound is " << massPound; // output statement
}
