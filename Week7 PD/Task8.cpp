#include <iostream>
using namespace std;

void cargo(int num);

int main()
{

    int num;

    cout << "Enter the number of Cargoes: ";
    cin >> num;

    while (num < 1 || num >= 1000)
    {
        cout << "Incorrect Format! Re-enter the number of Cargoes: ";
        cin >> num;
    }

    cargo(num);

    return 0;
}

void cargo(int num)
{
    int minibus = 0, truck = 0, train = 0, ton, total = 0;

    for (int c = 0; c < num; c++)
    {
        cout << "Enter number of tonnes: ";
        cin >> ton;

        while (ton < 1 || ton >= 1000)
        {
            cout << "Incorrect Format! Re-enter number of tonnes: ";
            cin >> ton;
        }

        if (ton <= 3)
        {
            minibus += ton;
        }
        else if (ton <= 11)
        {
            truck += ton;
        }
        else
        {
            train += ton;
        }

        total += ton;
    }

    cout << "Average cost-per-tonne is: " << ((minibus * 200) + (truck * 175) + (train * 120)) / total << endl;
    cout << "Percentage of cargo by minibus: " << (minibus * 100) / total << endl;
    cout << "Percentage of cargo by truck: " << (truck * 100) / total << endl;
    cout << "Percentage of cargo by train: " << (train * 100) / total << endl;
}