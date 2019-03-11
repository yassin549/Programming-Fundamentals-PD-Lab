#include <iostream>
using namespace std;

int main()

{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    for (int c = 0; c <= num; c++)
    {
        for (int j = 0; j < num - c; j++)
        {
            cout << " ";
        }
        for (int i = 0; i < c; i++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int c = 0; c <= num; c++)
    {
        for (int i = 0; i < c; i++)
        {
            cout << " ";
        }
        for (int j = 0; j < num - c; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/*
5



*/