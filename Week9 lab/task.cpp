#include <iostream>
using namespace std;

int main()
{
    bool result;
    float total = 0;
    int change[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter value of change: ";
        cin >> change[i];

        if (i == 0)
        {
            total += change[i] * 0.25;
        }
        else if (i == 1)
        {
            total += change[i] * 0.1;
        }
        else if (i == 2)
        {
            total += change[i] * 0.05;
        }
        else if (i == 3)
        {
            total += change[i] * 0.01;
        }
    }

    float check;
    cout << "Enter value to check: ";
    cin >> check;

    if (check <= total)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}