// Programmer: Harith Iqbal, Case Study 4, Kid Fun Land Penang
#include <iostream>
#include <iomanip>
using namespace std;
float calcPrice(int, int); // declaring function calcPrice
float calDiscount(float);  // declaring function calDiscpunt
int main()
{
	char codeC, codeA, code, prog = 'Y'; // input variable
	int adult, child, totalAdult = 0, totalChild = 0;
	float totalPrice, totalDisc; // output variable

	while (prog == 'Y')
	{
		cout << "\tWelcome to Kid Fun Land Penang!\n\n";
		cout << "\t\tC = Child (RM45.00)\n\t\tA = Adult (RM5.00)\n\n";
		while (code != 'X') // program stop asking for quantity when X
		{
			cout << "Please enter the ticket code(X to stop)     : ";
			cin >> code;
			if (code == 'C')
			{
				cout << "Please enter the number of child(C)         : ";
				cin >> child;
				totalChild += child; // calculating amount of child
			}
			else if (code == 'A')
			{
				cout << "Please enter the number of adult(A)         : ";
				cin >> adult;
				totalAdult += adult; // calculating amount of adult
			}
			else if (code == 'X')
				cout << "Summarising price...\n";
			else
				cout << "Error code!\n";
		}

		totalPrice = calcPrice(totalChild, totalAdult); // value stored returned by function in statement form
		totalDisc = calDiscount(totalPrice);

		cout << "\nReceipt for Kid Fun Land Penang\n\nTicket Quantity\nChild : " << totalChild;
		cout << "\nAdult : " << totalAdult;
		cout << "\nTotal Payment : RM" << setiosflags(ios::fixed) << setprecision(2) << totalDisc;

		cout << "\n\nDo you want to continue? (Y/N)      : "; // choice for user to discontinnue the program
		cin >> prog;
		code = 'A';
		totalChild = 0;
		totalAdult = 0;
		totalPrice = 0;
		totalDisc = 0;
	}
	cout << "\nThank you! Enjoy your time!";

	return 0;
}

float calcPrice(int totalChild, int totalAdult)
{
	float totalC, totalA, totalCA;
	totalC = totalChild * 45.00;
	totalA = totalAdult * 5.00;
	totalCA = totalC + totalA;
	return totalCA;
}

float calDiscount(float totalPrice)
{

	float discPrice;
	if (totalPrice > 200)
		discPrice = totalPrice - totalPrice * 0.17;
	else
		discPrice = totalPrice - totalPrice * 0.15;
	return discPrice;
}
