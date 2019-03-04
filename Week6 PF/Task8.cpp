#include <iostream>
using namespace std;

float afford(float budget, string category, int people);

int main()
{
    float budget, enough;
    string category;
    int people;

    cout << "Enter your budget: ";
    cin >> budget;
    cout << "Enter the category of seats you want: ";
    cin >> category;
    cout << "Enter the number of people: ";
    cin >> people;

    enough = afford(budget, category, people);

    if (enough > 0)
    {
        cout << "Yes! You have " << enough << " QR left." << endl;
    }
    else
    {
        enough = -1 * enough;
        cout << "Not enough budget! You need " << enough << " QR." << endl;
    }
}

float afford(float budget, string category, int people)
{
    float enough;

    if (people > 1 && people <= 4)
    {
        if (category == "VIP")
        {
            enough = -(people * 499.99) + (0.25 * budget);
        } 
        else
        {
            enough = -(people * 249.99) + (0.25 * budget);
        }
    }

    if (people > 4 && people <= 9)
    {
        if (category == "VIP")
        {
            enough = -(people * 499.99) + (0.4 * budget);
        } 
        else
        {
            enough = -(people * 249.99) + (0.4 * budget);
        }
    }

    if (people > 9 && people <= 24)
    {
        if (category == "VIP")
        {
            enough = -(people * 499.99) + (0.5 * budget);
        } 
        else
        {
            enough = -(people * 249.99) + (0.5 * budget);
        }
    }

    if (people > 24 && people <= 49)
    {
        if (category == "VIP")
        {
            enough = -(people * 499.99) + (0.6 * budget);
        } 
        else
        {
            enough = -(people * 249.99) + (0.6 * budget);
        }
    }

    if (people > 50)
    {
        if (category == "VIP")
        {
            enough = -(people * 499.99) + (0.75 * budget);
        } 
        else
        {
            enough = -(people * 249.99) + (0.75 * budget);
        }
    }

    return enough;
}
