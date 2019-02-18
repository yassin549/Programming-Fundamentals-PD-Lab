#include <iostream>
using namespace std;

void add(int number1, int number2);
void multiply(int number1, int number2);
void subtraction(int number1, int number2);

int main(){

int number1, number2;
char operation;

while (true) 
{

 cout << "Enter number: ";
 cin >> number1;

 cout << "Enter number: ";
 cin >> number2;

 cout << "Enter operation: ";
 cin >> operation;

 if ( operation == '+' ) {
	add(number1, number2);
	}

 if ( operation == '-' ) {
	subtraction(number1, number2);
	}

 if ( operation == '*' ) {
	multiply(number1, number2);
	}
}
return 0;}

void add(int number1, int number2)
{
int sum;

sum = number1 + number2;
cout << "Sum is: " << sum << endl;
}

void multiply(int number1, int number2){

int mul = number1 * number2;

cout << "Product is: " << mul << endl;
}

void subtraction(int number1, int number2){

int subtract = number1 - number2;

cout << "Subtraction result is: " << subtract << endl;
 
}
