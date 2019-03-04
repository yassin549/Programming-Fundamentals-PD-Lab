#include <iostream>
using namespace std;

float bill(string fruit, string day, float quantity);

int main()
{
    string fruit, day;
    float quantity;
    float price;

    cout << "Enter Fruit: ";
    cin >> fruit;
    cout << "Enter Day of the week: ";
    cin >> day;
    cout << "Enter quantity of fruit: ";
    cin >> quantity;

    price = bill(fruit, day, quantity);

    if (price == 0)
    {
        cout << "Invalid input";
    }
    else
    {
        cout << "Your bill is: " << price << endl;
    }

    return 0;
}

float bill(string fruit, string day, float quantity)
{
    bool week;
    float price;

    if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {
        week = true;
    }
    else if (day == "saturday" || day == "sunday")
    {
        week = false;
    }
    else
    {
        price = 0;
        return price;
    }

    if (fruit == "banana")
    {
        if (week)
        {
            price = quantity * 2.5;
        }
        else
        {
            price = quantity * 2.7;
        }
    }

    if (fruit == "apple")
    {
        if (week)
        {
            price = quantity * 1.2;
        }
        else
        {
            price = quantity * 1.25;
        }
    }

    if (fruit == "orange")
    {
        if (week)
        {
            price = quantity * 0.85;
        }
        else
        {
            price = quantity * 0.9;
        }
    }

    if (fruit == "grapefruit")
    {
        if (week)
        {
            price = quantity * 1.45;
        }
        else
        {
            price = quantity * 1.6;
        }
    }

    if (fruit == "kiwi")
    {
        if (week)
        {
            price = quantity * 2.7;
        }
        else
        {
            price = quantity * 3;
        }
    }

    if (fruit == "pineapple")
    {
        if (week)
        {
            price = quantity * 5.5;
        }
        else
        {
            price = quantity * 5.6;
        }
    }

    if (fruit == "grapes")
    {
        if (week)
        {
            price = quantity * 3.85;
        }
        else
        {
            price = quantity * 4.2;
        }
    }

    return price;
}