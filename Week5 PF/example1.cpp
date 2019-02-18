#include <iostream>
using namespace std;

int add(int num1, int num2);
float divide(float num1, float num2);
int max(int, int);
double pow(int, int);

int main()
{

 int num1, num2, total, num3, num4, greater, number, power;
 double result;
 float number1, number2, div; 

 cout << "Enter first number: ";
 cin >> num1;
 cout << "Enter second number: ";
 cin >> num2;
 
 total = add(num1, num2);
 cout << "Sum is: " << total << endl;

 cout << "Enter first number: ";
 cin >> number1;
 cout << "Enter second number: ";
 cin >> number2;

 div = divide(number1, number2);
 cout << "Result is: " << div << endl;

 cout << "Enter first number: ";
 cin >> num3;
 cout << "Enter second number: ";
 cin >> num4;

 greater = max(num3, num4);
 cout << "Greater is: " << greater << endl;

 cout << "Enter number: ";
 cin >> number;
 cout << "Enter exponent: ";
 cin >> power;

 result = pow(number, power);
 cout << "Result is: " << result << endl;


 return 0;}

int add(int num1, int num2)
{
 int sum = num1 + num2;
 return sum;
}

float divide(float num1, float num2)
{
 float result = num1 / num2;
 return result;
}

int max(int num1, int num2)
{
 if (num1 < num2)
 {
	return num2;
 }
 else
 {
	return num1;
 }
}

double pow(int num1, int num2)
{
 double result = num1 ^ num2;
 return result;
}
