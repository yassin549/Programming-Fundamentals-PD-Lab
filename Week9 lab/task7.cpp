#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    int small = 999999;
    cout << "Enter size: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];

        if (arr[i] < small)
        {
            small = arr[i];
        }
    }

    cout << "Smallest number is: " << small << endl;

    return 0;
}