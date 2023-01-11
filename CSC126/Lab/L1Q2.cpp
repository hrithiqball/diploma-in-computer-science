// Question2

#include <iostream>

using namespace std;

int main()

{
	int xcm, ycm;
	int perimeter, areaRectangle;

	cout << "Please enter X in cm" << endl;
	cin >> xcm;
	cout << "Please enter Y in cm" << endl;
	cin >> ycm;

	perimeter = (2 * xcm) + (2 * ycm);
	areaRectangle = xcm * ycm;

	cout << "Perimeter is " << perimeter << endl;
	cout << "Area of Rectangle is " << areaRectangle << endl;
}
