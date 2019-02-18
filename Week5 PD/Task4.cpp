#include <iostream>
using namespace std;

int firm(int hours, int days, int workers);

int main(){            //days*workers*9 - 90

	int hours, days, workers, extra;

	cout << "Enter number of hours needed to complete the project in the range 0-200000: ";
	cin >> hours;
	cout << "Enter numberof  days the firm has to complete the project in the range 0-20000: ";
	cin >> days;
	cout << "Enter number of all workers in the range 0-200: ";
	cin >> workers;
  
	extra = firm(hours, days, workers); 

	if (extra > 0){
		cout << "Yes! " << extra << " hours left." << endl;
	}
	
	if (extra < 0){
		extra = extra * -1;
		cout << "Not enough time! " << extra << " hours needed." << endl;
	}	

return 0;}


int firm(int hours, int days, int workers)
{
	int extra = (days * workers * 9) - hours;
	return extra;
}