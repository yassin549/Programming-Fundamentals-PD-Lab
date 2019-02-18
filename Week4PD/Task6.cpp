#include <iostream>
#include <windows.h>
using namespace std;

void printA();
void printW();
void printI();
void printS();
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

int main(){

 int x = 0;
 int y = 0;

 system("cls");

 gotoxy(x, y);
 printA();
 printW();
 printA();
 printI();
 printS();

return 0;}


void printA()
{
cout << "         ####       " << endl;
cout << "      ###    ###    " << endl;
cout << "    ###        ###  " << endl;
cout << "   ###          ### " << endl;
cout << "   ################ " << endl;
cout << "   ###          ### " << endl;
cout << "   ###          ### " << endl;
cout << "   ###          ### " << endl;
cout << "   ###          ### " << endl << endl << endl;
}



void printW()
{
cout << " ###                   ### " << endl;
cout << "  ###                 ###  " << endl;
cout << "   ###               ###   " << endl;
cout << "    ###    ####     ###    " << endl;
cout << "     ###  ##   ##  ###     " << endl;
cout << "       ###       ###       " << endl << endl << endl;
}

void printI()
{
cout << "        ########## " << endl;
cout << "            ##     " << endl;
cout << "            ##     " << endl;
cout << "            ##     " << endl;
cout << "            ##     " << endl;
cout << "            ##     " << endl;
cout << "        ########## " << endl << endl << endl;
}


void printS()
{
cout <<  "     ###########    " << endl; 
cout <<  "   ###         ###  " << endl; 
cout <<  "   ###         ###  " << endl; 
cout <<  "   ###              " << endl; 
cout <<  "    ############    " << endl; 
cout <<  "               ###  " << endl; 
cout <<  "   ###         ###  " << endl; 
cout <<  "   ###         ###  " << endl; 
cout <<  "     ###########    " << endl<< endl << endl; 
}







