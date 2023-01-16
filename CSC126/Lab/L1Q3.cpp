// Question 3

#include <iostream>

using namespace std;

int main()

{
	int curYear, userAge;
	int retireYear;
	const int retireAge = 60;

	cout << "Please enter the current year" << endl;
	cin >> curYear;
	cout << "Please enter your age" << endl;
	cin >> userAge;

	retireYear = retireAge - userAge + curYear;

	cout << "Your retirement year is " << retireYear;
}
