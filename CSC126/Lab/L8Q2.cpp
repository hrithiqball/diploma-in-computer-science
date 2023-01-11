// Lab 8 Question 2
#include <iostream>
using namespace std;

void calretire();
int main()
{
	return 0;
}

void calretire()
{
	int year, age, retire;
	cout << "Enter current year : ";
	cin >> year;
	cout << "Enter your age : ";
	cin >> age;

	retire = 60 - age + year;
}
