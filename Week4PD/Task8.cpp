#include <iostream>
using namespace std;

void isEqual(int, int);

int main(){


int num1, num2;

cout << "Enter number1: ";
cin >> num1;

cout << "Enter number2: ";
cin >> num2;

isEqual(num1, num2);

return 0;}

void isEqual(int num1, int num2)
{
 if (num1 == num2)
 { 
 	cout << "True" << endl; 
 }
 else
 {
	cout << "False" << endl;
 }
}