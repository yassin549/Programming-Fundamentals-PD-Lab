#include <iostream>
using namespace std;

int main()
{
    string word;

    cout << "Enter word: ";
    getline(cin, word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        cout << word[i] << "\t" << i << endl;
    }

    return 0;
}