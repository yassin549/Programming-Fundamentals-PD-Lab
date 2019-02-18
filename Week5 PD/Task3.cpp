#include <iostream>
using namespace std;

float taxCalculator(char type, float price);

int main ()
{
	float price, rate, fprice;
	char type;

	cout << "Enter type of vehicle: ";
	cin >> type;
	cout << "Enter price of vehicle: ";
	cin >> price;

	fprice = taxCalculator(type, price);

	cout << "The final price on a vehicle of type " << type << " after adding the tax is " << fprice << endl;

return 0;} 

float taxCalculator(char type, float price)
{
	float fprice;
	
	if (type == 'M')
	{
		fprice = price * 1.06; 
	}
	if (type == 'E')
	{
		fprice = price * 1.08; 
	}
	if (type == 'S')
	{
		fprice = price * 1.1; 
	}
	if (type == 'V')
	{
		fprice = price * 1.12; 
	}
	if (type == 'T')
	{
		fprice =price * 1.15; 
	}

	return fprice;	

}