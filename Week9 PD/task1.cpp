#include <iostream>
using namespace std;

int main()
{
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};

    string fruitorder;
    int quantity, cost;

    cout << "Enter fruit to buy: ";
    cin >> fruitorder;
    cout << "Enter quantity: ";
    cin >> quantity;

    for (int i = 0; i < 4; i++)
    {
        if (fruit[i] == fruitorder)
        {
            cost = quantity * price[i];
            break;
        }
    }

    cout << "Total price is: " << cost << endl;
}