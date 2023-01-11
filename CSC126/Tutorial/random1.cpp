//SoloLearn Random
#include <iostream>
#include <cstdlib> 	//for random 
#include <ctime>	//for second
using namespace std;
int main()
{
	srand(98);
	
	for (int x=1; x<=10; x++)
	{
		cout<<rand()<<endl;
	}
	
	for (int i=1; i<=5; i++)
	{
		cout<<1+(rand() % 6)<<endl;
	}
	
}
