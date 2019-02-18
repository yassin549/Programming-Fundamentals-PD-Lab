#include <iostream>
#include <windows.h>
using namespace std;

void printname(int, int);
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

int main(){

 int x = 19;
 int y = 13;

 system("cls");

 gotoxy(x, y);
 printname(x, y);
 


 gotoxy(0, 30);
return 0;}

void printname(int x, int y)
{
cout <<  "     ###########             ####           #############         ###       ### "   << endl; gotoxy(x, y+=1);
cout <<  "   ###         ###        ###    ###        ###          ###      ###      ### "    << endl; gotoxy(x, y+=1);
cout <<  "   ###         ###      ###        ###      ###           ###     ###    ### "      << endl; gotoxy(x, y+=1);
cout <<  "   ###                 ###          ###     ###          ###      ###  ### "        << endl; gotoxy(x, y+=1);
cout <<  "    ############       ################     ### ##########        ### ### "         << endl; gotoxy(x, y+=1);
cout <<  "               ###     ###          ###     ###  ###              ###    ### "      << endl; gotoxy(x, y+=1);
cout <<  "   ###         ###     ###          ###     ###     ###           ###      ### "    << endl; gotoxy(x, y+=1);
cout <<  "   ###         ###     ###          ###     ###        ###        ###        ### "  << endl; gotoxy(x, y+=1);
cout <<  "     ###########       ###          ###     ###         ###       ###         ### " << endl; gotoxy(x, y+=1);
}







