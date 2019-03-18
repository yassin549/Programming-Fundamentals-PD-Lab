#include <iostream>
using namespace std;

int main()
{
    int size, iterations;
    cout << "Enter the size of the array: ";
    cin >> size;
    int num[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter value: ";
        cin >> num[i];
    }

    cout << "Enter the number of times transformation needs to be done: ";
    cin >> iterations;

    for (int i = 0; i < iterations; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (num[j] % 2 == 0)
            {
                num[j] -= 2;
            }
            else
            {
                num[j] += 2;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
}