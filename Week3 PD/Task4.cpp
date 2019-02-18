#include <iostream>
using namespace std;
int main(){

string name;
int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
float percent;
float sum;

cout << "Enter your name: ";
cin >> name;

cout << "Enter Subject 1 marks: ";
cin >> subject1;

cout << "Enter Subject 2 marks: ";
cin >> subject2;

cout << "Enter Subject 3 marks: ";
cin >> subject3;

cout << "Enter Subject 4 marks: ";
cin >> subject4;

cout << "Enter Subject 5 marks: ";
cin >> subject5;

sum = subject1 + subject2 + subject3 + subject4 + subject5;
percent = sum /500 * 100;

cout << "Your Percentage: " << percent << "%";



return 0;}













