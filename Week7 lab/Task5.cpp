#include <iostream>
using namespace std;

int Lcm(int num1, int num2);

int main()
{

    int num1, num2;

    cout << "Enter number1: ";
    cin >> num1;
    cout << "Enter number2: ";
    cin >> num2;

    cout << "LCM is: " << Lcm(num1, num2);

    return 0;
}

int Lcm(int num1, int num2)
{
    int hcf = 1;
    int c = 1;

    while (c != num1 && c != num2)
    {
        if (num1 % c == 0 && num2 % c == 0)
        {
            hcf = c;
        }
        c++;
    }

    return (num1 * num2) / hcf;
}