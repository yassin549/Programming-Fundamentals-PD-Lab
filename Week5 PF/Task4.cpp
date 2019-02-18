#include <iostream>
using namespace std;

bool oddish(int num);

int main()
{
int num;
bool result;
while (true){
cout << "Enter number to check oddish/evenish: ";
cin >> num;

result = oddish(num);

if (result == true)
{
 cout << "Number is oddish." << endl;
}
if (result == false)
{
 cout << "Number is evenish."<< endl;
}
}
return 0;}

bool oddish(int number)
{
bool isodd;
int num = number;
int sum = 0;

while(num != 0)
{
sum = sum + (num % 10);
num = num / 10;
}

if ((sum % 2) == 0)
{
	isodd = false;
} 
if ((sum % 2) != 0)
{
	isodd = true;
} 
return isodd;
}