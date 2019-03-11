#include <iostream>
using namespace std;

void printpercent(int num);

int main()
{
    int num;

    cout << "Enter any number: ";
    cin >> num;

    while (num < 1 || num >= 1000)
    {
        cout << "Incorrect! Re-enter number: ";
        cin >> num;
    }

    printpercent(num);

    return 0;
}

void printpercent(int num)
{
    int digit, p1 = 0, p2 = 0, p3 = 0;

    for (int c = 0; c < num; c++)
    {
        cout << "Enter digit: ";
        cin >> digit;

        while (digit < 1 || digit >= 1000)
        {
            cout << "Incorrect! Re-enter digit: ";
            cin >> digit;
        }

        if (digit % 2 == 0)
        {
            p1++;
        }
        if (digit % 3 == 0)
        {
            p2++;
        }
        if (digit % 4 == 0)
        {
            p3++;
        }
    }

    cout << "Percentage 1 is: " << (p1 * 100) / num << endl;
    cout << "Percentage 2 is: " << (p2 * 100) / num << endl;
    cout << "Percentage 3 is: " << (p3 * 100) / num << endl;
}