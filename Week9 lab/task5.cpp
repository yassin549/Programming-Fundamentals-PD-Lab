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

    int num;
    cout << "Enter number to search in array: ";
    cin >> num;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            cout << "Found at index position " << i << endl;
            break;
        }
        if (i == size - 1)
        {
            cout << "Number not found." << endl;
        }
    }

    return 0;
}