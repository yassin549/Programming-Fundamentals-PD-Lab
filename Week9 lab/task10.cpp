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

    for (int i = c; i >= 0; i--)
    {
        cout << word[i];
    }

    return 0;
}