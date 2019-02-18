# include <iostream>
using namespace std;

double finalvolume(double length, double width, double height);

int main(){
	float length, width, height;
	double conlen, conwidth, conhei;
	string unit;
	double volume;

	cout << "Enter Length in meters: ";
	cin >> length;
	cout << "Enter Width in meters: ";
	cin >> width;
	cout << "Enter Height in meters: ";
	cin >> height;
	cout << "Enter unit in which you want answer: ";
	cin >> unit;

	if (unit == "millimeteres"){
	conlen = length * 1000;
	conwidth = width * 1000;
	conhei = height * 1000;
	}
	
	if (unit == "centimeters"){
	conlen = length * 100;
	conwidth = width * 100;
	conhei = height * 100;
	}

	if (unit == "kilometers"){
	conlen = length / 1000;
	conwidth = width / 1000;
	conhei = height / 1000;
	}

	if (unit == "meters"){
	conlen = length;
	conwidth = width;
	conhei = height;
	}

	volume = finalvolume(conlen, conwidth, conhei);	

	cout << volume << " cubic " << unit << endl;

	return 0;}


double finalvolume(double length, double width, double height)
{
	double volume = (length * width * height) / 3;
	return volume;
}
