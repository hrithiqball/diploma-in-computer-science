// Lab2Q1 by Harith Iqbal

#include <iostream>

using namespace std;

int main()
{
	float x1, x2, y1, y2;
	float xCoord, yCoord;

	cout << "Please enter the coordinate of first point" << endl;
	cout << "First X coordinate: ";
	cin >> x1;
	cout << "First Y coordinate: ";
	cin >> y1;

	cout << "Please enter the coordinate of second point" << endl;
	cout << "Second X coordinate: ";
	cin >> x2;
	cout << "Second Y coordinate: ";
	cin >> y2;

	xCoord = (x1 + x2) / 2;
	yCoord = (y1 + y2) / 2;

	cout << "The x coordinate of the midpoint is " << xCoord << endl;
	cout << "The y coordinate of the midpoint is " << yCoord;
}
