#include <iostream>
using namespace std;

int main()
{
    string vowels = "aeiou";
    string text, newtext;
    bool found;
    int c = 0;

    cout << "Enter text: ";
    getline(cin, text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        for (int j = 0; vowels[j] != '\0'; j++)
        {
            if (text[i] == vowels[j])
            {
                found = true;
                break;
            }
        }
        if (found == true)
        {
            found = false;
            continue;
        }
        else
        {
            newtext[c] = text[i];
            c++;
        }
    }

    for (int i = 0; i < c; i++)
    {
        cout << newtext[i];
    }
    return 0;
}