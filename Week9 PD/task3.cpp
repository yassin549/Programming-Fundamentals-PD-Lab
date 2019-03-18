#include <iostream>
using namespace std;

int main()
{
    string text;
    int c = 0;

    cout << "Enter your text: ";
    cin >> text;

    /*  for (int i = 0; text[i] != '\0'; i++)
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
      }*/
    if (text.length() % 2 == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}