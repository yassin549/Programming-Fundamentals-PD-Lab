#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    cout << "Enter size: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}