#include <iostream>
using namespace std;
int main(){

float coinRate = 1.94;
float vegPrice;
float fruitPrice;
int vegTotal;
int fruitTotal;
float vegcost;
float fruitcost;
float totalcost;

cout << "Enter vegetable price per kg: ";
cin >> vegPrice;

cout << "Enter fruit price per kg";
cin >> fruitPrice;

cout << "Enter total kilograms of vegetables sold: ";
cin >> vegTotal;

cout << "Enter total kilograms of fruits sold: ";
cin >> fruitTotal;

vegcost = vegPrice * vegTotal;
fruitcost = fruitPrice * fruitTotal;
totalcost = (vegcost + fruitcost) / coinRate; 

cout << "Total earnings in Rupees is: " << totalcost;










return 0;}