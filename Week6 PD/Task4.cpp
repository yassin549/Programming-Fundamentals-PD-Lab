#include <iostream>
using namespace std;

float nbill(int min);
float pbill(int day, int night);

int main()
{
    char service;
    float min, day, night, bill;

    cout << "Enter which type of customer you are (Residential or Premium) select (r/p): ";
    cin >> service;

    if (service == 'p')
    {
        cout << "Enter number of min minutes service was used during the day: ";
        cin >> day;
        cout << "Enter number of min minutes service was used during the night: ";
        cin >> night;

        bill = pbill(day, night);
    }
    else if (service == 'n')
    {
        cout << "Enter number of minutes you used the service: ";
        cin >> min;

        bill = nbill(min);
    }
    else
    {
        cout << "Invalid input.";
        return 0;
    }

    cout << "The charges are: " << bill << endl;

    return 0;
}

float nbill(int min)
{
    float bill;
    if (min > 50)
    {
        bill = 10 + ((min - 50) * 0.2);
    }
    else
    {
        bill = 10;
    }
    return bill;
}

float pbill(int day, int night)
{
    float billd, billn;

    if (day > 75)
    {
        billd = 25 + ((day - 75) * 0.1);
    }
    else
    {
        billd = 25;
    }

    if (night > 100)
    {
        billn = 25 + ((night - 100) * 0.05);
    }
    else
    {
        billn = 25;
    }

    return billd + billn;
}
