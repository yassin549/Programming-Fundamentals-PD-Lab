#include <iostream>
using namespace std;

int isgreater(int, int, int);

int main()
{
int num1, num2, num3;

cout << "Enter number1: ";
cin >> num1;

cout << "Enter number2: ";
cin >> num2;

cout << "Enter number3: ";
cin >> num3;

int greater = isgreater(num1, num2, num3);

if (greater == 0)
{
    cout << "Invalid input!" << endl;
}
else
{
    cout << "Greater number is: " << greater << endl;
}

return 0;}

int isgreater(int num1, int num2, int num3)
{
    int greater;
    if (num1 > num2 && num1 > num3)
    {
        greater = num1; 
    }
    else if (num2 > num1 && num2 > num3)
    {
        greater = num2;
    }
    else if (num3 > num1 && num3 > num2)
    {
        greater = num3;
    }
    else
    {
        greater = 0;
    }

    return greater;
}