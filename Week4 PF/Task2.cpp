#include <iostream>
using namespace std;

void ifPassed(int marks);

int main(){

int marks;

while(true)
 {
  cout << "Enter Quiz marks: ";
  cin >> marks;

  ifPassed(marks);
 }

return 0;}

void ifPassed(int marks){

if ( marks > 50 ) {
	cout << "You have passed the first Quiz of PF!" << endl;
	}

if ( marks == 50) {
	cout << "You barely passed the first Quiz. Work Hard!" << endl;
	}

if ( marks < 50 ) {
	cout << "You failed the first Quiz!" <<endl;
	}
}