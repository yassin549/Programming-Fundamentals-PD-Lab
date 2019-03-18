#include <iostream>
using namespace std;

int main()
{
    string word;
    int c = 0;

    cout << "Enter word: ";
    getline(cin, word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        c++;
    }

    if (c % 2 == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}