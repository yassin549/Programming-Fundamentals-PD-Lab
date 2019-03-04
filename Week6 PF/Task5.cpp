#include <iostream>
using namespace std;

float total(string type, int columns, int rows);

int main()
{
    string type;
    int columns, rows;
    float income;

    cout << "Enter the type of screening: ";
    cin >> type;
    cout << "Enter number of columns: ";
    cin >> columns;
    cout << "Enter number of rows: ";
    cin >> rows;

    income = total(type, columns, rows);
    cout << "Total income is: " << income << " euros." << endl;

    return 0;
}

float total(string type, int columns, int rows)
{
    float income = 0;

    if (type == "premier")
    {
        income = 12 * columns * rows;
    }
    else if (type == "normal")
    {
        income = 7.5 * columns * rows;
    }
    else if (type == "Discount")
    {
        income = 5 * columns * rows;
    }
    else 
    {
        income = 0;
    }
    return income;
}