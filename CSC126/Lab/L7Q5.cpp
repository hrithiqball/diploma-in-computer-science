// Lab 7 Question 5
#include <iostream>
using namespace std;
int main()
{
	int student, mark, high;

	cout << "Enter number of student: ";
	cin >> student;

	for (int i = 0; i < student; i++)
	{
		cout << "Enter your mark : ";
		cin >> mark;

		if (i == 0)
			high = mark;
		else
		{
			if (mark > high)
				high = mark;
		}
	}
	cout << "Highest mark : " << high;
}
