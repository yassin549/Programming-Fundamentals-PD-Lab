#include <iostream>
using namespace std;
int main(){

int num1;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
int num8;
int num9;
int num10;
int num11;
int num12;
int num13;
int num14;
int num15;
int add5;
int mul5;
int sub5;
int add2;
int sub2;

cout << "Enter number: ";
cin >> num1;
cout << "Enter number: ";
cin >> num2;
cout << "Enter number: ";
cin >> num3;
cout << "Enter number: ";
cin >> num4;
cout << "Enter number: ";
cin >> num5;
cout << "Enter number: ";

add5 = num1 + num2 + num3+ num4 + num5;

cin >> num6;
cout << "Enter number: ";
cin >> num7;
cout << "Enter number: ";
cin >> num8;
cout << "Enter number: ";
cin >> num9;
cout << "Enter number: ";
cin >> num10;

mul5 = num6 * num7 * num8 * num9 * num10;

cout << "Enter number: ";
cin >> num11;
cout << "Enter number: ";
cin >> num12;
cout << "Enter number: ";
cin >> num13;
cout << "Enter number: ";
cin >> num14;
cout << "Enter number: ";
cin >> num15;

sub5 = num11 - num12 - num13 - num14 - num15;

add2 = add5 + mul5;
sub2 = add2 - sub5;

cout << "Fianl Output is: " << sub2;































return 0;}