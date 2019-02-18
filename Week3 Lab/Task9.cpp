#include <iostream>
using namespace std;
int main(){

int num1;
int num2;
int num3;
float num4;
int num5;
int num6;
int num7;
float num8;
int num9;
int num10;
int add;
int mul;
float div;
int sub;
float result;

cout << "Enter First number: ";
cin >> num1;
cout << "Enter Second number: ";
cin >> num2;
cout << "Enter Third number: ";
cin >> num3;
cout << "Enter Fourth number: ";
cin >> num4;
cout << "Enter Fifth number: ";
cin >> num5;
cout << "Enter Sixth number: ";
cin >> num6;
cout << "Enter Seventh number: ";
cin >> num7;
cout << "Enter Eighth number: ";
cin >> num8;
cout << "Enter Ninth number: ";
cin >> num9;
cout << "Enter Tenth number: ";
cin >> num10;

add = num3 + num5 + num9;
mul = num7 * num10 * num6;
div = num9 / num4;
sub = num2 - num1;

result = add + mul + div+ sub;
cout << "Your result is: " << result;

return 0;} 