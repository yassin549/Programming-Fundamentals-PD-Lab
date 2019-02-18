#include <iostream>
using namespace std;

void price(int, int, int);

int main(){

int red, white, tulips;

cout << "Enter number of red roses: ";
cin >> red;

cout << "Enter number of white roses: ";
cin >> white;

cout << "Enter number of tulips: ";
cin >> tulips;

price(red, white, tulips);

return 0;}

void price(int red, int white, int tulips)
{

 float amount = (red * 2) + (white * 4.1) + (tulips * 2.5);

 if (amount >= 200)
 {
	cout << "Total price is: " << amount << endl;
	cout << "Discounted price is: " << (amount * 0.8) << endl;
 }
 else
 { 
	cout << "Total price is: " << amount << endl;
 }
}