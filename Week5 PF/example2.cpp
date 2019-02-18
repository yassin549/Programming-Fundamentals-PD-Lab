#include <iostream>
#include <cmath>
using namespace std;

int main()
{

 int num1, num2, greater, smaller, number, power, result;
 float number1, number2, small, square_num, root, cuberoot, cube_num, num_ceil, num_floor;

 cout << "Enter number: ";
 cin >> num1;
 cout << "Enter number: ";
 cin >> num2;

 greater = max(num1, num2);
 cout << "Greater is: " << greater << endl;

 cout << "Enter number: ";
 cin >> number1;
 cout << "Enter number: ";
 cin >> number2;

 small = min(number1, number2);
 cout << "Smaller is: " << small << endl;

 cout << "Enter number: ";
 cin >> number;
 cout << "Enter power: ";
 cin >> power;

 result = pow(number, power);
 cout << "Answer is: " << result << endl;

 cout << "Enter squared number: ";
 cin >> square_num;

 root = sqrt(square_num);
 cout << "Root is: " << root << endl;

 cout << "Enter cubed number: ";
 cin >> cube_num;

 cuberoot = cbrt(cube_num);
 cout << "Cube root is: " << cuberoot << endl;

 cout << "Enter decimal number to round-off: ";
 cin >> num_ceil;

 num_ceil = ceil(num_ceil);
 cout << "Round-off number is: " << num_ceil << endl;

 cout << "Enter decimal number to round-off: ";
 cin >> num_floor;

 num_floor = floor(num_ceil);
 cout << "Round-off number is: " << num_floor << endl;


 return 0;}