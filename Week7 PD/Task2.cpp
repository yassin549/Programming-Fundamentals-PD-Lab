#include <iostream>
using namespace std;

int main()

{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    for (int c = 0; c < num; c++)
    {
        for (int i = num; i > c; i--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}