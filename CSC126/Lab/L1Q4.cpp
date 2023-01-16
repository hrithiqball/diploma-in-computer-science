// Question 4

#include <iostream>

using namespace std;

int main()

{
	float loanAmount;
	float amountInt, customerOwes;
	const float ITERATE = 0.035;
	const int PERIOD = 10;

	cout << "Please enter your loan amount" << endl;
	cin >> loanAmount;

	amountInt = loanAmount * ITERATE * PERIOD;
	customerOwes = amountInt + loanAmount;

	cout << "Amount of your loan's interest is RM " << amountInt << endl;
	cout << "The amount you owed to bank is RM " << customerOwes;
}
