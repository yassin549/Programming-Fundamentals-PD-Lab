#include <iostream>
using namespace std;

void Age(int age);

int main(){

int age;

while (true) 
{ 
 cout << "Enter Your age: ";
 cin >> age;

 Age(age);

}
return 0;}

void Age(int age) 
 {
	if (age >= 18) 
   {
		cout << "Your are eligible to vote!" << endl;
   }
	else 
   {
		cout << "You are not eligible to vote!" << endl;
   }
 }