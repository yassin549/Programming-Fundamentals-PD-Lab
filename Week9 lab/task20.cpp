#include <iostream>
using namespace std;

int main()
{
    int resistors;
    cout << "enter the number of resistors: ";
    cin >> resistors;

    int total = 0;
    int resistance[resistors];

    for (int i = 0; i < resistors; i++)
    {
        cout << "Enter value of resistance: ";
        cin >> resistance[i];
        total += resistance[i];
    }
    cout << "total resistance is: " << total;

    return 0;
}