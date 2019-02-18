#include <iostream>
using namespace std;

int minutes(int min);
int Hour(int hour, int finalmin);

int main()
{
    int min, hour, minfinal, hourfinal;

    while (true)
    {
        cout << "Enter hours: ";
        cin >> hour;
        cout << "Enter minutes: ";
        cin >> min;

        minfinal = minutes(min);
	hourfinal = Hour(hour, min);
	cout << "Final time is: " << hourfinal << " " << minfinal << endl;
    }
    return 0;
}

int minutes(int min)
{
    min += 15;

    if (min >= 60)
    {
        min = min % 60;
    }
    return min;
}

int Hour(int hours, int min)
{
    min += 15;
    if (min >= 60)
    {
	hours += 1;
    }
    if (hours > 23)
    {
        hours = 00;
    }
    return hours;
}