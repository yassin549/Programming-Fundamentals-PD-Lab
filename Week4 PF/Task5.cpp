#include <iostream>
using namespace std;

void isEven(int num);

int main()
{
	int num;

while (true)
 {

	cout << "Enter number: ";
	cin >> num;

	isEven(num);
 }
return 0;}

void isEven(int num)
{
	if (num % 2 == 0)
  {
		cout << "Number is Even." <<endl;
  }

	else
  {
		cout << "Number is Odd." <<endl;
  }
}