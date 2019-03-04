#include <iostream>
using namespace std;

float studio(string month, int stay);
float apartment(string month, int stay);

int main()
{
    int stay;
    string month;
    float sprice, aprice;

    cout << "Enter month: ";
    cin >> month;
    cout << "Enter number of days of stay: ";
    cin >> stay;

    sprice = studio(month, stay);
    aprice = apartment(month, stay);

    cout << "Apartment: " << aprice << "$." << endl;
    cout << "Studio: " << sprice << "$." << endl;

    return 0;
}

float studio(string month, int stay)
{
    float price;

    if (month == "may" || month == "october")
    {
        if (stay >= 14)
        {
            price = stay * 50 * 0.7;
        }
        else if (stay >= 7)
        {
            price = stay * 50 * 0.95;
        }
        else
        {
            price = stay * 50;
        }
    }

    if (month == "june" || month == "september")
    {
        if (stay >= 14)
        {
            price = stay * 75.2 * 0.8;
        }
        else
        {
            price = stay * 75.2;
        }
    }

    if (month == "july" || month == "august")
    {
        price = stay * 76;
    }

    return price;
}

float apartment(string month, int stay)
{
    float price;

    if (month == "may" || month == "october")
    {
        if (stay >= 14)
        {
            price = stay * 65 * 0.9;
        }
        else
        {
            price = stay * 65;
        }
    }

    if (month == "june" || month == "september")
    {
        if (stay >= 14)
        {
            price = stay * 68.7 * 0.9;
        }
        else
        {
            price = stay * 68.7;
        }
    }

    if (month == "july" || month == "august")
    {
        if (stay >= 14)
        {
            price = stay * 77 * 0.9;
        }
        else
        {
            price = stay * 77;
        }
    }

    return price;
}