// Lab 10 Q2
#include <iostream>
using namespace std;
int main()
{
	int freqA = 0, freqB = 0, freqC = 0;
	int score[10];
	char grade[10];

	for (int index = 0; index < 10; index++)
	{
		cout << "Please enter your score : ";
		cin >> score[index];
		if (score[index] >= 0 && score[index] <= 39)
		{
			grade[index] = 'C';
			freqC += 1;
		}
		else if (score[index] >= 40 && score[index] <= 69)
		{
			grade[index] = 'B';
			freqB += 1;
		}
		else if (score[index] >= 70 && score[index] <= 100)
		{
			grade[index] = 'A';
			freqA += 1;
		}
	}
	cout << "\nFrequency for grade A :" << freqA;
	cout << "\nFrequency for grade B :" << freqB;
	cout << "\nFrequency for grade C :" << freqC;
}
