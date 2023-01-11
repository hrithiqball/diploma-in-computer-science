// Lab 4
#include <iostream>
using namespace std;
int main()
{
	string productType;
	float price, discR, discP;

	cout << "Please enter product type(S/C/M) and price :";
	cin >> productType >> price;

	if (productType != "S" || productType != "C" || productType != "M" || price < 0)
		cout << "invalid product type";
	else if (productType == "S")
	{
		discR = price * 0.3;
		discP = price - discR;
	}
	else if (productType == "C")
	{
		discR = price * 0.1;
		discP = price - discR;
	}
	else if (productType == "M")
	{
		discR = price * 0.4;
		discP = price - discR;
	}

	if (discP > 0)
		cout << "Price after discount is : " << discP;
}
