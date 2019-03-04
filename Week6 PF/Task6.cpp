#include <iostream>
using namespace std;

float cheapest(int kilometers, string period);

int main()
{
    int kilometers;
    string period;
    float cheap;

    cout << "Enter the number of kilometers you want to travel in the range 1-5000: ";
    cin >> kilometers;
    cout << "Enter the period of day: ";
    cin >> period;

    cheap = cheapest(kilometers, period);

    cout << "The lowest price for this travel is: " << cheap << endl;

    return 0;
}

float cheapest(int kilometers, string period)
{
    float cheap;

    if (kilometers < 20)
    {
        if (period == "Day")
        {
            cheap = 0.7 + (0.79 * kilometers);
        }
        else
        {
            cheap = 0.7 + (0.9 * kilometers);
        }
    }

    else if (kilometers >= 20 && kilometers < 100)
    {
            cheap = 0.09 * kilometers;
    }

    else
    {
            cheap = 0.06 * kilometers;
    }

    return cheap;
}