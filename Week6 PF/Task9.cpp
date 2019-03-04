#include <iostream>
using namespace std;

float volley(string year, float holidays, float weekends);

int main()
{
    int days; 
    float holidays, weekends;
    string year;

    cout << "Enter type of year: ";
    cin >> year,
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> weekends;

    days = volley(year, holidays, weekends);

    cout << "Days when he played volley ball are: " << days << endl;

    return 0;
}

float volley(string year, float holidays, float weekends)
{
    float days = (0.6667 * holidays) + ((48 - weekends) * 0.75) + weekends;

    if (year == "leap")
    { 
       days = 1.15 * days;
    }
    
    return days;
}