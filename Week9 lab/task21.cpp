#include <iostream>
using namespace std;

int main()
{
    int arr1[2];
    int num;
    cout << "Enter the size of array: ";
    cin >> num;

    int arr2[num];

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter value of array 1: ";
        cin >> arr1[i];
    }
    for (int i = 0; i < num; i++)
    {
        cout << "Enter value of array 2: ";
        cin >> arr2[i];
    }

    int arr3[num + 2];
    arr3[0] = arr1[0];
    cout << arr3[0] << " ";

    for (int i = 1; i <= num; i++)
    {
        arr3[i] = arr2[i - 1];
        cout << arr3[i] << " ";
    }

    arr3[num + 1] = arr1[1];
    cout << arr3[num + 1];

    return 0;
}