// Lab 2 by Harith Iqbal

#include <iostream>

using namespace std;

int main()
{
	float firstNumber, secondNumber;
	int addition, subtraction, multiplication;
	float division;

	cout << "Please enter first number:     ";
	cin >> firstNumber;
	cout << "Please enter second number:     ";
	cin >> secondNumber;

	addition = firstNumber + secondNumber;
	subtraction = firstNumber - secondNumber;
	multiplication = firstNumber * secondNumber;
	division = firstNumber / secondNumber;

	cout << "1) Addition : " << firstNumber << " + " << secondNumber << " = " << addition << endl;
	cout << "2) Subtraction : " << firstNumber << " - " << secondNumber << " = " << subtraction << endl;
	cout << "3) Multiplication : " << firstNumber << " * " << secondNumber << " = " << multiplication << endl;
	cout << "4) Division : " << firstNumber << " / " << secondNumber << " = " << division << endl;
}
