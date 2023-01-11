// CSC128/415 April 2011 Part C Q1
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char code, hall, status = 'Y';
	int ticket, total, totalT = 0;
	string title = "Error";
	float totalG = 0.00, totalP = 0.00, grandtotal = 0;

	while (status == 'Y')
	{
		cout << "Film code (T/U)                     : ";
		cin >> code;
		if (code == 'T')
			title = "Ong Bak III(Thai)";
		else if (code == 'U')
			title = "The Twilight Saga: Eclipse(USA)";
		else
		{
			cout << "Error code!" << endl;
			ticket = 0;
			total = 0;
		}
		if (code == 'T' || code == 'U')
		{
			cout << "Enter type of hall(G-Gold/P-Premier): ";
			cin >> hall;
			if (hall != 'G' && hall != 'P')
			{
				cout << "Error code!" << endl;
				total = 0;
				ticket = 0;
			}
			if (hall == 'G' || hall == 'P')
			{
				cout << "Enter number of ticket              : ";
				cin >> ticket;
			}
		}
		if (hall == 'G')
		{
			total = ticket * 40;
			grandtotal += total;
			totalG += total;
			totalT += ticket;
		}
		else if (hall == 'P')
		{
			total = ticket * 20;
			grandtotal += total;
			totalP += total;
			totalT += ticket;
		}
		if (total != 0)
		{
			cout << "\nSTAR ENTERTAINMENT REPORT\nFilm Code\t\t: " << code;
			cout << "\nFilm Title\t\t: " << title;
			cout << "\nType of Hall\t\t: " << hall;
			cout << "\nNumber of Ticket\t: " << ticket;
			cout << "\nTotal Price(RM)\t\t: " << total;
		}
		cout << "\n\nThank you. Please come again. \nDo you want to continue?(Y/N)";
		cin >> status;
	}

	cout << "\nSTAR ENTERTAINMENT REPORT\nTotal ticket collection\t :" << totalT;
	cout << "\nGolden Hall(RM)\t\t :" << setiosflags(ios::fixed) << setprecision(2) << totalG;
	cout << "\nPremier Hall Hall(RM)\t :" << setiosflags(ios::fixed) << setprecision(2) << totalP;
	cout << "\nGrand Total(RM)\t\t :" << setiosflags(ios::fixed) << setprecision(2) << grandtotal;

	return 0;
}
