#include <iostream>
using namespace std;

int main()
{
    string text = "something";
    string argument;
    int a = 0;
    int t = 0;

    cout << "Enter argument: ";
    getline(cin, argument);

    for (int i = 0; argument[i] != '\0'; i++)
    {
        a++;
    }

    for (int i = 0; text[i] != '\0'; i++)
    {
        t++;
    }

    char final[a + t + 1];

    for (int i = 0; i < t; i++)
    {
        final[i] = text[i];
    }

    final[t] = ' ';

    for (int i = 0; i < a; i++)
    {
        final[t + 1 + i] = argument[i];
    }

    for (int i = 0; i < a + t + 1; i++)
    {
        cout << final[i];
    }

    return 0;
}