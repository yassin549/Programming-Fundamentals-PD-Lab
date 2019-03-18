#include <iostream>
using namespace std;

int main()
{
    string word;
    char letter;
    int c = 0;

    cout << "Enter word: ";
    getline(cin, word);

    cout << "Enter letter: ";
    cin >> letter;

    for (int i = 0; word[i] != '\0'; i++)
    {
        c++;
    }

    if (word[c - 1] == letter)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}