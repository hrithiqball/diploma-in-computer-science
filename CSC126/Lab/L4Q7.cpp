// Question 7
#include <iostream>
using namespace std;
int main()
{
	string level, institute, status;
	float fee;

	cout << "Please enter your institute type(Sch/Uni) : ";
	cin >> institute;
	if (institute == "Uni")
	{
		cout << "Are you a UiTM student? (yes/no) : ";
		cin >> status;
	}
	cout << "Choose your level [easy(E)/intermediate(I)/Advanced(A)] : ";
	cin >> level;

	if (institute == "Schk")
		if (level == "E")
			fee = 20.00;
		else if (level == "I")
			fee = 25.00;
		else if (level == "A")
			fee = 40.00;

	if (institute == "Uni")
		if (level == "E")
			fee = 40.00;
		else if (level == "I")
			fee = 150.00;
		else if (level == "A")
			fee = 250.00;

	if (status == "yes")
		fee = fee - (fee * 0.1);

	cout << "Your fee is : RM" << fee;
}
