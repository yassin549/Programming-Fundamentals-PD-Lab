#include <iostream>
using namespace std;

string zsign(int date, string month);

int main()
{
    int day;
    string month, sign;

    cout << "Enter day of your birth: ";
    cin >> day;
    cout << "Enter birth month: ";
    cin >> month;

    sign = zsign(day, month);

    cout << "People born on this data have zodiac " << sign << endl;

    return 0;
}

string zsign(int date, string month)
{
    string sign;

    if ((date >= 21 && month == "March") || (date <= 19 && month == "April"))
    {
        sign = "Aries";
    }
    else if ((date >= 21 && month == "April") || (date <= 20 && month == "May"))
    {
        sign = "Taurus";
    }
    else if ((date >= 21 && month == "May") || (date <= 20 && month == "June"))
    {
        sign = "Gemini";
    }
    else if ((date >= 21 && month == "June") || (date <= 22 && month == "July"))
    {
        sign = "Cancer";
    }
    else if ((date >= 23 && month == "July") || (date <= 22 && month == "August"))
    {
        sign = "Leo";
    }
    else if ((date >= 23 && month == "August") || (date <= 22 && month == "September"))
    {
        sign = "Virgo";
    }
    else if ((date >= 23 && month == "September") || (date <= 22 && month == "October"))
    {
        sign = "Libra";
    }
    else if ((date >= 23 && month == "October") || (date <= 21 && month == "November"))
    {
        sign = "Scorpio";
    }
    else if ((date >= 22 && month == "November") || (date <= 21 && month == "December"))
    {
        sign = "Sagittarius";
    }
    else if ((date >= 22 && month == "December") || (date <= 19 && month == "January"))
    {
        sign = "Capricorn";
    }
    else if ((date >= 20 && month == "January") || (date <= 18 && month == "February"))
    {
        sign = "Aquarius";
    }
    else if ((date >= 19 && month == "February") || (date <= 20 && month == "March"))
    {
        sign = "Pisces";
    }

    return sign;
}