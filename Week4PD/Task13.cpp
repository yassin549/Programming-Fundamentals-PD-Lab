#include <iostream>
using namespace std;

void sleepcheck(int);

int main(){

int holidays;

cout << "Enter number of holidays: ";
cin >> holidays;

sleepcheck(holidays);

return 0;}

void sleepcheck(int holidays)
{
 int gametime = (holidays * 127) + ((365 - holidays) * 63);
 cout << "Time for games is: " << gametime << endl;
 
 if ( gametime < 30000)
 {
	cout << "Tom sleeps well!"
	cout << "Difference from norm time is: " << (30000 - gametime) << " minutes.";
 }
 else
 {
	cout << "Tom will run away!";
 }
}