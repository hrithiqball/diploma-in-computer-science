// Lab 10 Q3
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float totalScore = 0.0, gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;
	float score[10] = {55.0, 67.0, 52.5, 70.5, 82.0, 31.0, 88.0, 64.5, 55.0, 89.0};
	float max = score[0], average;
	char grade[10];

	for (int index = 0; index < 10; index++) // assigning grade and counting grade
	{
		if (score[index] >= 90 && score[index] <= 100)
		{
			grade[index] = 'A';
			gradeA++;
		}
		else if (score[index] >= 80 && score[index] <= 89)
		{
			grade[index] = 'B';
			gradeB++;
		}
		else if (score[index] >= 70 && score[index] <= 79)
		{
			grade[index] = 'C';
			gradeC++;
		}
		else if (score[index] >= 60 && score[index] <= 69)
		{
			grade[index] = 'D';
			gradeD++;
		}
		else if (score[index] >= 0 && score[index] <= 59)
		{
			grade[index] = 'F';
			gradeF++;
		}

		totalScore += score[index]; // finding total score

		if (max < score[index]) // finding max value
			max = score[index];
	}

	average = totalScore / 10;

	cout << "Number of students acquired grade A : " << gradeA;
	cout << "\nNumber of students acquired grade B : " << gradeB;
	cout << "\nNumber of students acquired grade C : " << gradeC;
	cout << "\nNumber of students acquired grade D : " << gradeD;
	cout << "\nNumber of students acquired grade F : " << gradeF;
	cout << "\nAverage is\t\t: " << average;
	cout << "\nHighest score is\t: " << max;
}
