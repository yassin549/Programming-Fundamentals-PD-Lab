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

    int num = 0;
    cout << "Enter number: ";
    cin >> num;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] * num << " ";
    }
    return 0;
}