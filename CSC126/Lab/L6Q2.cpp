#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char code;
	int adult = 0, child = 0, totalA = 0, totalC = 0;
	float totalP = 0.00;

	cout << "Enter package code(A/B/C)(X to end): ";
	cin >> code;

	while (code != 'X')
	{
		if (code == 'A' || code == 'B' || code == 'C')
		{
			cout << "Enter number of adult and child: ";
			cin >> adult >> child;

			if (code == 'A')
			{
				totalP += adult * 40.00 + child * 21.00;
				totalA += adult;
				totalC += child;
			}
			else if (code == 'B')
			{
				totalP += adult * 23.00 + child * 14.00;
				totalA += adult;
				totalC += child;
			}
			else if (code == 'C')
			{
				totalP += adult * 38.00 + child * 18.00;
				totalA += adult;
				totalC += child;
			}
		}
		else
			cout << "Error package code!" << endl;

		cout << "Enter package code(A/B/C)(X to end): ";
		cin >> code;
	}
	cout << "Total number of adult   : " << totalA << endl;
	cout << "Total number of children: " << totalC << endl;
	cout << "Total price ticket sold : RM" << setiosflags(ios::fixed) << setprecision(2) << totalP;

	return 0;
}
