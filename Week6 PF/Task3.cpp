#include <iostream>
using namespace std;

string Title(char gender, int age);

int main()
{
    int age;
    char gender;
    string title;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender: ";
    cin >> gender;

    title = Title(gender, age);

    cout << title << endl;

    return 0;
}

string Title(char gender, int age)
{
    string text;
    if (gender == 'm')
    {
        if (age >= 16)
        {
            text = "Mr.";
        }
        else
        {
            text = "Master";
        }
    }
    else if (gender == 'f')
    {
        if (age >= 16)
        {
            text = "Ms.";
        }
        else
        {
            text = "Miss";
        }
    }
    else{
        text = "None";
    }
    return text;
}