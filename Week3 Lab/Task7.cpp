#include <iostream>
using namespace std;
int main(){

string name;
float matric;
float intermediate;
float ecat;
float aggregate;
float ecatRatio; 
float matricRatio;
float interRatio;

cout << "Enter name: ";
cin >> name;
cout << "Enter matric marks out of 1100: ";
cin >> matric;
cout << "Enter intermediate marks out 550: ";
cin >> intermediate;
cout << "Enter ecat marks out of 400: ";
cin >> ecat; 

ecatRatio = (ecat / 400) * 0.5;
matricRatio = (matric / 1100) * 0.1;
interRatio = (intermediate / 550) * 0.4;

aggregate = (ecatRatio + matricRatio + interRatio) * 100 ;

cout << "Your name is: " << name <<endl;
cout << "Your aggregate is: " << aggregate;




return 0;}