#include <iostream>
using namespace std;

float Price(float money, int year);

int main()
{
    int year;
    float money, price;

    cout << "Enter inherited money: ";
    cin >> money;

    cout << "Enter the year till he has to live: ";
    cin >> year;

    price = Price(money, year);

    if (price >= 0)
    {
        cout << "Yes! He will live a carefree life and will have " << price << "$ left." << endl;
    }
    else
    {
        cout << "No! He will need " << -1 * price << "$ to survive." << endl;
    }

    return 0;
}

float Price(float money, int year)
{
    float price = 0;
    int c = 1800;

    while (c <= year)
    {
        if (c % 2 == 0)
        {
            price += 12000;
        }
        else
        {
            price += 12000 + (50 * (18 + (c - 1800)));
        }

        c++;
    }

    return money - price;
}
