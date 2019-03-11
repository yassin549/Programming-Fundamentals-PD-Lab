#include <iostream>
using namespace std;

int totaldigits(int digits);

int main()
{
    int digits;

    cout << "Enter number to count digits: ";
    cin >> digits;

    digits = totaldigits(digits);

    cout << "Total digits are " << digits << endl;
    return 0;
}

int totaldigits(int digits)
{
    int c = 0;

    while (digits != 0)
    {
        digits = digits / 10;
        c++;
    }

    return c;
}