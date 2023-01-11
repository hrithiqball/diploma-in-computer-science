// SoloLearn Switch C++
#include <iostream>
using namespace std;
int main()
{
	int choice = 0;
	cout << "Input choice : ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Latte";
		break;
	case 2 || 8:
		cout << "Americano";
		break;
	case 3:
		cout << "Espresso";
		break;
	case 4:
		cout << "Cappuccino";
		break;
	case 5:
		cout << "Macchiato";
		break;
	}
}
