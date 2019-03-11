#include <iostream>
using namespace std;

int dots(float num);

int main()
{
    int num, res;

    cout << "Enter number you want to check dots for: ";
    cin >> num;

    res = dots(num);

    cout << res << endl;

    return 0;
}

int dots(float num)
{
    return (0.5 * num * num) + (0.5 * num); // 0.5n^2 + 0.5n  quadratic series
}