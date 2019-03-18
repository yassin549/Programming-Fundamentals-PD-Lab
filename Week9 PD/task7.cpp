#include <iostream>
using namespace std;

int main()
{
    string text1, text2;
    int count = 0;
    bool found = false;
    cout << "Enter text 1: ";
    getline(cin, text1);
    cout << "Enter text 2: ";
    getline(cin, text2);

    int common[100] = {0, 0, 0, 0, 0};

    for (int i = 0; i < text1.length(); i++)
    {
        for (int j = 0; j < text2.length(); j++)
        {
            for (int c = 0; c < count; c++)
            {
                if (common[c] == j)
                {
                    found = true;
                }
            }
            if (found == true)
            {
                continue;
            }
            else
            {
                if (text1[i] == text2[j])
                {
                    common[count] = j;
                    count += 1;
                }
            }
        }
    }

    cout << count;
}