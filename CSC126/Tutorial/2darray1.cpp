//Assignment Adrin
#include <iostream>
using namespace std;
string ChooseCookies(string cookie_names[]); //array
string GetPackage(char package_types[]);  //array
int GetQuantity(int);
float ProcessOrder(float cookie_price[], char, char, int); //first array

int main()
{	
	string cookie_names[6]={"walnut", "almond", "chocolate", "coffee", "oat", "lemon"}; //00 10 20 30 40 50 60
	string cookiesName;
	float cookie_price [18]={3.5, 5.0, 25.0, 3.5, 5.0, 24.5, 1.5, 4.0, 14.0, 2.9, 5.0, 15.0,2.7, 4.0, 12.8, 2.0, 3.0, 11.0}; //00
	string package_types[3]={"12 pcs", "24 pcs", "100 pcs"};

	/*float sales [3];
	float totalSales [3];*/
	
	char flavour, package, response;
	int quantity, average;
	float price;
	
	cout<<"***Welcome to Cute Cookies***\n\nYou may cboose from the following flavours:\n\tFlavour\n";
	cout<<"1. Walnut\n2. Almond\n3. Chocolate\n4. Coffee\n5. Oat\n6. Lemon\n\n";
	cookiesName = ChooseCookies(cookie_names , );
	
	cout<<"You have chosen "<<flavour;
	cout<<"\n\nAvailable packages :\t1)12 pcs\t2)24 pcs\t3)100 pcs\n";
	cout<<"Choose which package (1 or 2 or 3): ";
	cin>>package;
	
	cout<<"\nEnter quantity: ";
	cin>>quantity;
	
	cout<<"\nConfirmation of order :\n"<<quantity<<" pack(s) of "<<package<<" of "<<flavour<<" cookies";
	cout<<"\nAmount to pay is "<<price;
	
	cout<<"\nDo you want to order another cookies: ";
	cin>>response;
}

string ChooseCookies(string cookie_choices[])
{
	cout<<"Enter your choice : ";
	/*cin>>
	
	return string
	*/
}

string GetPackage()
{
	
}

int GetQuantity()
{
	
}

float ProccessOrder()
{
	
}
