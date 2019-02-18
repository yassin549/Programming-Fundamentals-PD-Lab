#include <iostream>
using namespace std;

bool symmetry(int num);

int main()
{
int num;
bool result;
while (true){
cout << "Enter number to check symmetry: ";
cin >> num;

result = symmetry(num);

if (result == true)
{
 cout << "Number is symmetrical." << endl;
}
if (result == false)
{
 cout << "Number is not symmetrical."<< endl;
}
}
return 0;}

bool symmetry(int num)
{
bool sym;
int number = num;
int dig1, dig2, dig3;

dig1 = number % 10;
number = number / 10; 
dig2 = number % 10;
number = number / 10;
dig2 = number % 10;
number = number / 10;

if (dig1 == dig2)
{
	sym = true;
} 
if (dig1 != dig2)
{
	sym = false;
} 
return sym;
}