#include <iostream>
using namespace std;

int main()
{
    int n1 = 0;
    int n;
    int n2 = 1;
    int iteration;

    cout << "Enter how many fibonacci series number you want to see: ";
    cin >> iteration;

    cout << n1 << endl
         << n2 << endl;

    for (int c = 1; c <= iteration - 2; c++)
    {
        n = n2;
        n2 = n1 + n2;
        n1 = n;
        cout << n2 << endl;
    }
    return 0;
}