#include <iostream>
#include <windows.h>
using namespace std;

void playermove(int x, int y);
void playermovereverse(int x, int y);
void printMaze();

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

int main(){

 int x = 3;
 int y = 2;

 system("cls");
 printMaze(); 

 playermove(x, y+1);  

 gotoxy(0, 30);
 return 0;}

void printMaze(){

cout << "##########################################################################           " << endl;
cout << "||............................................................  .....   ||           " << endl;
cout << "||..  %%%%%%%%%%%%%%%%%       ...      %%%%%%%%%%%%%%   |%|..   %%%%%   ||           " << endl;
cout << "||..         |%|    |%|    |%|...     |%|          |%|  |%|..     |%|   ||           " << endl;  
cout << "||..         |%|    |%|    |%|...     |%|          |%|  |%|..     |%|   ||           " << endl;
cout << "||..         %%%%%%%%%  .. |%|...     %%%%%%%%%%%%%%%      ..   %%%%%.  ||           " << endl;
cout << "||..         |%|        .. |%|...    ................  |%| ..        .  ||           " << endl;
cout << "||..         %%%%%%%%%%%.. |%|...    %%%%%%%%%%%%%     |%| ..   %%%%%.  ||           " << endl;
cout << "||..                 |%|.            |%|.......        |%| ..     |%|.  ||           " << endl;
cout << "||..     ........... |%|.            |%|.......|%|         ..     |%|.  ||           " << endl;
cout << "||..|%|  |%|%%%%%|%|.|%|. |%|           .......|%|         ..|%|  |%|.  ||           " << endl;
cout << "||..|%|  |%|     |%|..    %%%%%%%%%%%%  .......|%|          .|%|.       ||           " << endl;
cout << "||..|%|  |%|     |%|..          ...|%|      %%%%%%         . |%|.       ||           " << endl;
cout << "||..|%|              .          ...|%|                 |%| ..|%|.       ||           " << endl;
cout << "||..|%|  %%%%%%%%%%%%%%%%       ...|%|%%%%%%%%%%%%     |%| ..|%|%%%%%%  ||           " << endl;
cout << "||..................................................   |%| ...........  ||           " << endl;
cout << "||   ...............................................         ........   ||           " << endl;
cout << "||..|%|  |%|     |%|..    %%%%%%%%%%%%  .......|%|     |%| ..|%|.       ||           " << endl;
cout << "||..|%|  |%|     |%|..          ...|%|      %%%%%%     |%| ..|%|.       ||           " << endl;
cout << "||..|%|              .    G     ...|%|                 |%| ..|%|.       ||           " << endl;
cout << "||..|%|  %%%%%%%%%%%%%%%        ...|%|%%%%%%%%%%%      |%| ..|%|%%%%%   ||           " << endl;
cout << "||.................................................    |%| ..........   ||           " << endl;
cout << "||   ..............................................          ........   ||           " << endl;
cout << "##########################################################################           " << endl;
}


void playermove(int x, int y)
{ 
 if (y != 1)
 {
 gotoxy(x, y-1);
 cout << " "; 
 }

 if (y < 23)
 {
 gotoxy(x, y);
 cout << "P"; 
 Sleep(100);
 }

 if (y == 22)
 {
 playermovereverse(x, y);
 }
 
 playermove(x, y += 1);
} 

void playermovereverse(int x, int y)
{ 
 if (y != 22)
 {
 gotoxy(x, y+1);
 cout << " "; 
 }

 if (y > 1)
 {
 gotoxy(x, y);
 cout << "P"; 
 Sleep(100);
 }

 if (y == 1)
 {
 playermove(x, y);
 }
 
 playermovereverse(x, y -= 1);
}
