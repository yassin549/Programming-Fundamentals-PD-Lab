#include <iostream>
using namespace std;

string arrival(int starth, int startm, int arriveh, int arrivem);
string timediff(int starth, int startm, int arriveh, int arrivem);

int main()
{
    int starth, startm, arriveh, arrivem;
    string status, diff;

    cout << "Enter exam start hour time: ";
    cin >> starth;
    cout << "Enter exam start minutes time: ";
    cin >> startm;
    cout << "Enter hour of arrival: ";
    cin >> arriveh;
    cout << "Enter minute of arrival: ";
    cin >> arrivem;

    status = arrival(starth, startm, arriveh, arrivem);

    cout << status << endl;

    diff = timediff(starth, startm, arriveh, arrivem);
    cout << diff << endl;

    return 0;
}

string arrival(int starth, int startm, int arriveh, int arrivem)
{
    string status;

    if (arriveh < starth)
    {
        status = "Early";
    }
    else if (arriveh == starth && arrivem <= startm)
    {
        if ((startm - arrivem) <= 30)
        {
            status = "On time";
        }
        else
        {
            status = "Early";
        }
    }
    else if (arriveh == starth && arrivem > startm)
    {
        status = "Late";
    }
    else if (arriveh > starth)
    {
        status = "Late";
    }

    return status;
}

string timediff(int starth, int startm, int arriveh, int arrivem)
{
    string diff;
    int timeh, timem;

    if (arriveh < starth)
    {
        timeh = starth - arriveh;
        if (startm >= arrivem)
        {
            timem = startm - arrivem;
        }
        else if (startm < arrivem)
        {
            timem = (startm + 60) - arrivem;
        }

        diff = to_string(timeh) + ":" + to_string(timem) + " hours before the start.";
    }

    if (arriveh > starth)
    {
        timeh = arriveh - starth;
        if (startm >= arrivem)
        {
            timem = startm - arrivem;
        }
        else if (startm < arrivem)
        {
            timem = (startm + 60) - arrivem;
        }

        diff = to_string(timeh) + ":" + to_string(timem) + " hours after the start.";
    }

    if (arriveh == starth)
    {
        if (startm >= arrivem)
        {
            timem = startm - arrivem;
            diff = to_string(timem) + " minutes before the start.";
        }
        else if (startm < arrivem)
        {
            timem = arrivem - startm;
            diff = to_string(timem) + " minutes after the start.";
        }
    }

    return diff;
}
