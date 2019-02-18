#include <iostream>
using namespace std;

void discount(int amount, string day);

int main()
{
int amount;
string day;

while (true)
 {
	cout << "Enter purchase amount: ";
	cin >> amount;
	cout << "Enter Day: ";
	cin >> day;
	
	discount(amount, day);
 }

return 0;}

void discount(int amount, string day)
{
	float payable;

	if (day == "sunday")
	{
		payable = amount *0.9;
		cout << "Amount payable is: " << payable << endl;
	}
	else
	{
		cout << "No discount! Amount payable is: " << amount << endl;
	}
}