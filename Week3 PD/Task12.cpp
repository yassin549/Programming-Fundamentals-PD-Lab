#include <iostream>
using namespace std;
int main(){

int num1;
int num2;
int num11;
int num12;
int num13;
int num21;
int num22;
int num23;
int mul1;
int mul2;
int mul3;

cout << "Enter any six-digit number: ";
cin >> num1;
cout << "Enter any six-digit number: ";
cin >> num2;

num11 = num1 % 100;
num1 = num1 / 100;
cout << "Number is groups of 2: " << num11 <<endl;

num12 = num1 % 100;
num1 = num1 / 100;
cout << "Number is groups of 2: " << num12 <<endl;

num13 = num1 % 100;
num1 = num1 / 100;
cout << "Number is groups of 2: " << num13 <<endl;

num21 = num2 % 100;
num2 = num2 / 100;
cout << "Number is groups of 2: " << num21 <<endl;

num22 = num2 % 100;
num2 = num2 / 100;
cout << "Number is groups of 2: " << num22 <<endl;

num23 = num2 % 100;
num2 = num2 / 100;
cout << "Number is groups of 2: " << num23 <<endl;

mul1 = num11 * num21;
mul2 = num12 * num22;
mul3 = num13 * num23;

cout << "Product 1 is: " << mul1 <<endl;
cout << "Product 2 is: " << mul2 <<endl;
cout << "Product 3 is: " << mul3 <<endl;
return 0;}










