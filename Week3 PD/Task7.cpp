#include <iostream>
using namespace std;
int main(){

string moviename;
int adultPrice;
int childPrice;
int adultNumber;
int childNumber;
float donate;
float total; 
float amountAfterDonation;

cout << "Enter movie name: ";
cin >> moviename;

cout << "Enter Adult Ticket Price: ";
cin >> adultPrice;

cout << "Enter Child Ticket Price: ";
cin >> childPrice;

cout << "Enter Number of Adult Tickets sold: ";
cin >> adultNumber;

cout << "Enter Number of Child Tickets sold: ";
cin >> childNumber;

cout << "Enter Percentage to donate: ";
cin >> donate;

total = (adultPrice * adultNumber) + (childPrice * childNumber);
amountAfterDonation = total * (1 - (donate/100));

cout << "Totol amount generated: " << total <<endl;
cout << "Amount after donation: " << amountAfterDonation << endl;






return 0;}