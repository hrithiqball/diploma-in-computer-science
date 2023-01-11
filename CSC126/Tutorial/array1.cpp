//SoloLearn Array Quiz
#include <iostream>
using namespace std;

int main() 
{
    int ages[5];
    float discount, price;

    for (int i = 0; i < 5; ++i) 
	{
        cin >> ages[i];
    }
	int youngest = ages[0];

    for (int index=1; index<5; index++)
    {
        if (ages[index] < youngest)
            youngest = ages[index];
    }

    discount = youngest/100.0;
    price = 50 - 50*discount;

    cout<<price;
    
    
    return 0;
}
