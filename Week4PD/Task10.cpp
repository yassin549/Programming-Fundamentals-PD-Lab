#include <iostream>
using namespace std;

void ticketprice(string, int);

int main(){

string name;
int price;

while (true)
{
cout << "Enter Name of Country: ";
cin >> name;

cout << "Enter Price in dollars: ";
cin >> price;

ticketprice(name, price);
}

return 0;}

void ticketprice(string name, int price)
{
 float payable;

 if (name == "Pakistan")
 {
	payable = price * 0.95;
	cout << "Amount payable after discount is: " << payable << endl;
 }	
 if (name == "Ireland")
 {
	payable = price * 0.9;
	cout << "Amount payable after discount is: " << payable << endl;
 }	
 if (name == "India")
 {
	payable = price * 0.8;
	cout << "Amount payable after discount is: " << payable << endl;
 }	
 if (name == "England")
 {
	payable = price * 0.7;
	cout << "Amount payable after discount is: " << payable << endl;
 }	
 if (name == "Canada")
 {
	payable = price * 0.55;
	cout << "Amount payable after discount is: " << payable << endl;
 }	   
}