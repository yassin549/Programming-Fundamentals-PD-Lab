#include <iostream>
using namespace std;

void isGreater(int num1, int num2);

int main(){

int num1, num2;

while(true)
 {
  cout << "Enter number1: ";
  cin >> num1;

  cout << "Enter number2: ";
  cin >> num2;

  isGreater(num1, num2);
 }
return 0;}

void isGreater(int num1, int num2)
{
	if (num1 > num2)
 	{
		cout << "Number1 is greater than number2." << endl;	
 	}

	else
 	{
		cout << "Number2 is greater than number1." << endl;	
 	}
}