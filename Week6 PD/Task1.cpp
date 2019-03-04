#include <iostream>
using namespace std;

string activity(string temp, string humid);

int main()
{
    string temp, humid, play;

    cout << "Enter the temperature: ";
    cin >> temp;
    cout << "Enter humidity levels: ";
    cin >> humid;

    play = activity(temp, humid);

    cout << play << endl;
    return 0;
}

string activity(string temp, string humid)
{
    string play;

    if (temp == "warm" && humid == "dry")
    {
        play = "Play Tennis";
    }
    else if (temp == "warm" && humid == "humid")
    {
        play = "swim";
    }
    else if(temp == "cold" && humid == "dry")
    {
        play = "Play Basketball";
    }
    else if (temp == "cold" && humid == "humid")
    {
        play = "Watch TV";
    }
    return play;
}