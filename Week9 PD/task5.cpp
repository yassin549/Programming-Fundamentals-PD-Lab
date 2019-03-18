#include <iostream>
using namespace std;

int main()
{
    bool found = false;
    string num[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter value: ";
        cin >> num[i];
    }

    for (int i = 1; i < 4; i++)
    {
        if (num[i] != num[0])
        {
            found = true;
        }
    }

    if (found == true)
    {
        cout << "false" << endl;
    }
    else
    {
        cout << "true";
    }
}