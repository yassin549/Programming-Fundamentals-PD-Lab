#include <iostream>
using namespace std;

void speedcheck(int);

int main(){

int speed;

cout << "Enter your Speed: ";
cin >> speed;

speedcheck(speed);

return 0;}

void speedcheck(int speed)
{
 if (speed <= 100)
 {
	cout << "PERFECT! You're going good!" << endl;
 }
 if (speed > 100)
 {
	cout << "HALT.... You will be CHALLENGED!" << endl;
 }
}