#include <iostream>
using namespace std;

int main()
{
    int size = 0, sum = 0;
    cout << "Enter size: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
        sum += arr[i];
    }

    float avg = sum / size;

    cout << "Average is: " << avg << endl;
    return 0;
}