# include <iostream>
using namespace std;

void printmenu();
void aggregate(string name, float matric, float inter, float ecat);
void compare(string name1, int ecat1, string name2, int ecat2);

int main(){
 
 int choice, ecat1, ecat2;
 float matric, inter, ecat;
 string name, name1, name2;

 printmenu();

 cin >> choice;
 
 if (choice == 1)
 {
	cout << "****************AGGREGATE CALCULATOR****************" << endl;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your matric marks out of 1100: ";
	cin >> matric;
	cout << "Enter your inter marks out of 550: ";
	cin >> inter;
	cout << "Enter your ecat marks out of 400: ";
	cin >> ecat;
	
	aggregate(name, matric, inter, ecat);
 } 
 if (choice == 2)
 {
	cout << "*******************Compare  Marks*******************" << endl;
	cout << "Enter name of first student: ";
	cin >> name1;
	cout << "Enter ecat marks of first student: ";
	cin >> ecat1;
	cout << "Enter name of second student: ";
	cin >> name2;
	cout << "Enter ecat marks of second student: ";
	cin >> ecat2;

	compare(name1, ecat1, name2, ecat2);
 }
 
return 0;}

void printmenu()
{
 system("cls");
 cout <<  "===================================================="         << endl;
 cout <<  "===================================================="         << endl;
 cout <<  "$                                                  $"         << endl;
 cout <<  "$               UNIVERSITY ADMISSION               $"         << endl;
 cout <<  "$                MANAGEMENT SYSTEM                 $"         << endl;
 cout <<  "$                                                  $"         << endl;
 cout <<  "===================================================="         << endl;
 cout <<  "===================================================="         << endl << endl;
 cout <<  "*********************MAIN MENU**********************" << endl;
 cout <<  "1. Calculate aggregate" << endl;
 cout <<  "2. Compare marks"<< endl << endl;
 cout <<  "Enter 1 for option 1 and 2 for option 2: ";
}

void aggregate(string name, float matric, float inter, float ecat)
{
float aggregate;
float ecatRatio; 
float matricRatio;
float interRatio;

ecatRatio = (ecat / 400) * 0.4;
matricRatio = (matric / 900) * 0.3;
interRatio = (inter / 1100) * 0.3;

aggregate = (ecatRatio + matricRatio + interRatio) * 100 ;

cout << "Aggregate of " << name << " is: " << aggregate <<endl;
}

void compare(string name1, int ecat1, string name2, int ecat2)
{
if (ecat1 > ecat2)
 {
	cout << "Student 1 has higher marks therefore roll number 1 is : " << name1 << endl;
 }
if (ecat2 > ecat1)
 {
	cout << "Student 2 has higher marks therefore roll number 1 is : " << name2 << endl;
 }
}









