// Question 4

#include <iostream>

using namespace std;

int main()

{
	float loanAmount;
	float amountInt, custOwes;
	const float INTRATE = 0.035;
	const int PERIOD = 10;

	cout << "Please enter your loan amount" << endl;
	cin >> loanAmount;

	amountInt = loanAmount * INTRATE * PERIOD;
	custOwes = amountInt + loanAmount;

	cout << "Amount of your loan's interest is RM " << amountInt << endl;
	cout << "The amount you owed to bank is RM " << custOwes;
}
