#include <iostream>
using namespace std;
int main()
{
	char gender;
	int merit, successM = 0, successF = 0;

	cout << "Residential College Application \n \nEnter gender (M-male, F-female, other character to stop) : ";
	cin >> gender;

	while (gender == 'M' || gender == 'F')
	{
		cout << "Enter merit points: ";
		cin >> merit;
		if (gender == 'M' && merit > 60)
			successM++;
		if (gender == 'F' && merit > 60)
			successF++;

		cout << "Enter gender (M-male, F-female, other character to stop) : ";
		cin >> gender;
	}

	cout << "\nThe number of male students who are successful\t\t: " << successM << endl;
	cout << "The number of female students who are successful\t: " << successF;

	return 0;
}
