#include <iostream>
using namespace std;

int main()

{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    for (int r = 1; r <= num / 2; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << "*";
        }
        for (int j = 1; j <= num - (2 * r); j++)
        {
            cout << " ";
        }
        for (int i = 1; i <= r; i++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
