#include <iostream>
using namespace std;

int main()
{
    string word;
    string alphabets = {"abcdefghijklmnopqrstuvwxyz"};
    cout << "Enter word: ";
    getline(cin, word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        for (int j = 0; alphabets[j] != '\0'; j++)
        {
            if (word[i] == alphabets[j])
            {
                word[i] = alphabets[j + 1];
                break;
            }
        }
    }

    cout << word;

    return 0;
}