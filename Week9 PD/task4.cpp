#include <iostream>
using namespace std;

int main()
{
    int size;
    bool found;
    cout << "Enter the size of the array: ";
    cin >> size;
    string num[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter value: ";
        cin >> num[i];
        for (int j = 0; j < num[i].length(); j++)
        {
            if (num[i][j] == '7')
            {
                found = true;
                break;
            }
        }
    }

    if (found == true)
    {
        cout << "Boom" << endl;
    }
    else
    {
        cout << "There is no number 7 in the array.";
    }
}