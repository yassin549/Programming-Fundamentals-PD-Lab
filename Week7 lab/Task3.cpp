#include <iostream>
using namespace std;

int frequency(int num, int digit);

int main()
{
    int num, digit;

    cout << "Enter number: ";
    cin >> num;
    cout << "Enter digit: ";
    cin >> digit;

    cout << "Number of digits is: " << frequency(num, digit);

    return 0;
}

int frequency(int num, int digit)
{
    int c = 0;
    int rem;

    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;

        if (rem == digit)
        {
            c++;
        }
    }

    return c;
}