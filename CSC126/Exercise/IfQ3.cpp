// Question 3

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int moviecode, numberofticket, newprice;
	string movietitle, paymentcode;

	cout << "Please enter the movie code, number of ticket and payment code = ";
	cin >> moviecode >> numberofticket >> paymentcode;

	if (moviecode == 1)
	{
		newprice = numberofticket * 25;
		movietitle = "Spiderman";
	}
	else
	{
		newprice = numberofticket * 20;
		movietitle = "Frozen";
	}

	if (paymentcode == "C")
	{
		newprice = newprice * 1.10;
		cout << movietitle << newprice;
	}
	else
		cout << movietitle << newprice;
}
