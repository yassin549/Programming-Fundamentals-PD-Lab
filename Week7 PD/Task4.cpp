#include <iostream>
using namespace std;

void series(int num);

int main()
{
    int num = 0;

    while (num < 1)
    {
        cout << "Enter any number: ";
        cin >> num;
    }

    series(num);

    return 0;
}

void series(int num)
{
    cout << 1;
    for (int c = 2; c < num; c++)
    {
        cout << ", ";
        if (c % 4 == 0)
        {
            cout << c * 10;
        }
        else
        {
            cout << c;
        }
    }
}