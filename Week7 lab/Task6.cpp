#include <iostream>
using namespace std;

void printpercent(int num);

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;
    printpercent(num);

    return 0;
}

void printpercent(int number)
{
    int num;
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    for (int c = 0; c < number; c++)
    {
        cout << "Enter any number: ";
        cin >> num;

        if (num <= 200)
        {
            p1++;
        }
        else if (num < 400)
        {
            p2++;
        }
        else if (num < 600)
        {
            p3++;
        }
        else if (num < 800)
        {
            p4++;
        }
        else if (num >= 800)
        {
            p5++;
        }
    }

    cout << "percentage 1: " << (p1 * 100) / number << endl;
    cout << "percentage 2: " << (p2 * 100) / number << endl;
    cout << "percentage 3: " << (p3 * 100) / number << endl;
    cout << "percentage 4: " << (p4 * 100) / number << endl;
    cout << "percentage 5: " << (p5 * 100) / number << endl;
}