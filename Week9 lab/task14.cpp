#include <iostream>
using namespace std;

int main()
{
    string vowels = "aeiou";
    string text;

    int c = 0;

    cout << "Enter text: ";
    getline(cin, text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        for (int j = 0; vowels[j] != '\0'; j++)
        {
            if (text[i] == vowels[j])
            {
                c++;
                break;
            }
        }
        }

    cout << c;
    return 0;
}