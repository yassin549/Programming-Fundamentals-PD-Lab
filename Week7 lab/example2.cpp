#include <iostream>
using namespace std;

int main()
{
    int num;
    bool isprime = true;

    cout << "Enter number to check prime: ";
    cin >> num;

    for (int c = 2; c <= num / 2; c++)
    {
        if (num % c == 0)
        {
            isprime = false;
        }
    }

    if (isprime == true)
    {
        cout << "Number is prime.";
    }
    else if (isprime == false)
    {
        cout << "Number is not prime.";
    }

    return 0;
}