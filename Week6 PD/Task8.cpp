#include <iostream>
using namespace std;

string figurecheck(int h, int x, int y);

int main()
{
    int h, x, y;
    string result;

    cout << "Enter an integer h: ";
    cin >> h;
    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y=coordinate: ";
    cin >> y;

    result = figurecheck(h, x, y);

    cout << result << endl;

    return 0;
}

string figurecheck(int h, int x, int y)
{
    string check;

    if (x > (3 * h) || y > (4 * h) || y > h && x < h || y > h && x > (2 * h))
    {
        check = "outside";
    }

    else if ((x <= (3 * h) && y == 0) || (x == 0 && y <= h) || (x <= h && y == h) || (x == h && y >= h) || ((x >= h && x <= (2 * h)) && y == (4 * h)) || (x == (2 * h) && y >= h) || ((x >= (2 * h) && x <= (3 * h)) && y == h) || x == (3 * h))
    {
        check = "border";
    }

    else
    {
        check = "inside";
    }

    return check;
}