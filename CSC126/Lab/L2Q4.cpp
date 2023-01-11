// Lab2 Question 4

#include <iostream>

using namespace std;

int main()
{
	float myr;
	float usd, bnd, idr, hkd;
	float USD = 0.31;
	float BND = 0.39;
	float IDR = 3730.27;
	float HKD = 2.41;

	cout << "*******************program for currency converter*****************" << endl;
	cout << "*                                                                *" << endl;
	cout << "*Please enter amount of money in Malaysian Ringgit (MYR) currency*" << endl;
	cout << "*                   : RM ";
	cin >> myr;
	cout << "*                                                                *" << endl;
	cout << "******************************************************************" << endl;

	usd = myr * USD;
	bnd = myr * BND;
	idr = myr * IDR;
	hkd = myr * HKD;

	cout << "Results:" << endl;
	cout << endl;
	cout << "1) US Dollar (USD)         :" << usd << endl;
	cout << "2) Brunei Dollar (BND)     :" << bnd << endl;
	cout << "3) Indonesian Rupiah (IDR) :" << idr << endl;
	cout << "4) Hong Kong Dollar (HKD)  :" << hkd << endl;
}
