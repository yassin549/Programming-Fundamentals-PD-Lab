#include <iostream>
using namespace std;

int main()
{
    int size, time = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    string num[size];

    cout << "Enter value: ";
    cin >> num[0];

    for (int i = 1; i < size; i++)
    {
        cout << "Enter value: ";
        cin >> num[i];
        if (num[i] != num[i - 1])
        {
            time += 1;
        }
    }

    time += (size * 2);

    cout << time;
}