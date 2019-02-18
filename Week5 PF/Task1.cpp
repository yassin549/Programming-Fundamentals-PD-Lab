#include <iostream>
#include <cmath>
using namespace std;

float height(float angle, int adjacent);

int main()
{

int adjacent;
float angle, rad, answer;
while (true)
{
cout << "Enter distance: ";
cin >> adjacent;
cout << "Enter angle of elevation: ";
cin >> angle;

rad = angle / 57.2958;

answer = height(rad, adjacent);
cout << "Answer is: " << answer << endl;
}
return 0;}

float height(float angle, int adjacent)
{
 float height = adjacent * (tan(angle));
 return height;
} 