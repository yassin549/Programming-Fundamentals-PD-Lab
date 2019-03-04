#include <iostream>
using namespace std;

float cost(string city, string product, int quantity);

int main()
{
    int quantity;
    string city, product;
    float price;

    cout << "Enter the city: ";
    cin >> city;
    cout << "Enter the product: ";
    cin >> product;
    cout << "Enter the quantity: ";
    cin >> quantity;

    price = cost(city, product, quantity);
    cout << "The final payable price is: " << price << endl;
    
    return 0;
}

float cost(string city, string product, int quantity)
{
    float price;

    if (city == "Sofia")
    {
        if (product == "coffee")
        {
            price = quantity * 0.5;
        }
        else if (product == "water")
        {
            price = quantity * 0.8;
        }
        else if (product == "beer")
        {
            price = quantity * 1.2;
        }
        else if (product == "sweets")
        {
            price = quantity * 1.45;
        }
        else
        {
            price = quantity * 1.6;
        }
    }

    if (city == "Plovdiv")
    {
        if (product == "coffee")
        {
            price = quantity * 0.4;
        }
        else if (product == "water")
        {
            price = quantity * 0.7;
        }
        else if (product == "beer")
        {
            price = quantity * 1.15;
        }
        else if (product == "sweets")
        {
            price = quantity * 1.30;
        }
        else
        {
            price = quantity * 15;
        }
    }

    if (city == "Varna")
    {
        if (product == "coffee")
        {
            price = quantity * 0.45;
        }
        else if (product == "water")
        {
            price = quantity * 0.7;
        }
        else if (product == "beer")
        {
            price = quantity * 1.1;
        }
        else if (product == "sweets")
        {
            price = quantity * 1.35;
        }
        else
        {
            price = quantity * 1.55;
        }
    }

    return price;
}