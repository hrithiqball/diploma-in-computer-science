// Lab 8 Question 4
#include <iostream>
using namespace std;

int calretire(int year, int age);
int main()
{
	int year, age;

	cout << "Enter current year : ";
	cin >> year;
	cout << "Enter current age : ";
	cin >> age;
	return 0;
}

int calretire(int year, int age)
{
	int retire = 0;
	retire = 60 - age + year;
}
