#include <iostream>
using namespace std;
int main(){

int num;
int total;
int num1;
int num2;
int num3;
int num4;

cout << "Enter any four-digit number: ";
cin >> num;

num1 = num % 10;
num = num / 10;
num2 = num % 10;
num = num / 10;
num3 = num % 10;
num = num / 10;
num4 = num % 10;
num = num / 10;
total = num1 + num2 +num3 + num4;

cout << "Sum is: " << total;

return 0;}