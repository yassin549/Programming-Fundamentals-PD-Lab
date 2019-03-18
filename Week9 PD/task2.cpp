#include <iostream>
using namespace std;

int main()
{
    string movie[5] = {"Uncharted", "Justice League", "Pacific rim", "Spies in Disguise", "I am Legend"};

    string movieticket;
    int cost;

    cout << "Enter movie to watch: ";
    cin >> movieticket;

    for (int i = 0; i < 5; i++)
    {
        if (movie[i] == movieticket)
        {
            if (i % 2 == 0)
            {
                cost = 500 * 0.9;
            }
            else
            {
                cost = 500 * 0.95;
            }
            break;
        }
    }

    cout << "Total price is: " << cost << endl;
}