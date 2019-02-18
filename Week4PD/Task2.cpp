#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

int main(){

 system("cls");
 printMaze(); 
 return 0;}

void printMaze(){

 cout << "####################################################" << endl;
 cout << "#                                                  #" << endl;
 cout << "#      |$$$|                                       #" << endl;
 cout << "#      |$$$|   |::::::|                      |$|   #" << endl;
 cout << "#                                            |$|   #" << endl;
 cout << "#                                            |$|   #" << endl;
 cout << "#       ______                               |$|   #" << endl;
 cout << "#      |$$$$$$!             |::::::|   |$|   |$|   #" << endl;
 cout << "#      |  ______                             |$|   #" << endl;
 cout << "#      | |$$$$$$|                                  #" << endl;
 cout << "#                                                  #" << endl;
 cout << "#                                                  #" << endl;
 cout << "####################################################" << endl;
}










