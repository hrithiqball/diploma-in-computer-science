// Lab2 Question 3

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char userName[256];
	int day, month, year, curYear;
	int curAge, nextAge;

	cout << "Enter your name: ";
	cin.getline(userName, 256);
	cout << "Enter your birthday (dd mm yyyy): ";
	cin >> day >> month >> year;
	cout << "Enter curent year (yyyy): ";
	cin >> curYear;

	curAge = curYear - year;
	nextAge = curAge + 1;

	cout << "Hi " << userName << ", Now you are " << curAge << " years old. Next year you will be " << nextAge << "years old.";
}
