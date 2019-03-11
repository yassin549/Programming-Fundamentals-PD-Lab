#include <iostream>
using namespace std;

int add(int num);

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    cout << "Sum of digits is: " << add(num);

    return 0;
}

int add(int num)
{
    int c = 0;
    int rem;

    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;

        c += rem;
    }

    return c;
}