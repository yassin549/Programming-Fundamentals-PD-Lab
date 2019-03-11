#include <iostream>
using namespace std;

float money(int age, float price, int cost);

int main()
{
    int age, cost;
    float enough, price;

    cout << "Enter Lily's age: ";
    cin >> age;
    cout << "Enter the price of washing machine: ";
    cin >> price;
    cout << "Enter the sales cost of each toy she sold: ";
    cin >> cost;

    enough = money(age, price, cost);

    if (enough < 0)
    {
        cout << "No! She need more $" << (-1 * enough) << endl;
    }
    else
    {
        cout << "Yes! She is left with $" << enough << endl;
    }

    return 0;
}

float money(int age, float price, int cost)
{
    float enough = 0;
    int c = 1, total = 0, count = 1;

    while (c <= age)
    {
        if (c % 2 == 0)
        {
            enough += (10 * count) - 1;
            count++;
        }
        else
        {
            enough += cost;
        }

        c++;
    }

    return enough - price;
}