// Lab 8 Question 6
#include <iostream>
using namespace std;

int calretire(int year, int age);
int main()
{
	int year, age, retire;

	cout << "Enter current year : ";
	cin >> year;
	cout << "Enter your age : ";
	cin >> age;

	retire = calretire(year, age);
	cout << "Your retirement year is : " << retire;
}

int calretire(int year, int age)
{
	int retire = 0;
	retire = 60 - age + year;
	return retire;
}
