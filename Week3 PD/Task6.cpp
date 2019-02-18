#include <iostream>
using namespace std;
int main(){

int size;
float cost;
int area;
float costPerPound;
float costPerFeet;

cout << "Enter bag size in pounds: ";
cin >> size;

cout << "Enter cost of the bag: ";
cin >> cost;

cout << "Enter area covered by each bag in square feet: ";
cin >> area;

costPerPound = cost / size;
costPerFeet = cost / area;

cout << "Cost of fertilizer per pound: " << costPerPound << endl;
cout << "Cost of fertilizing the area per square feet: " << costPerFeet << endl;

return 0;}