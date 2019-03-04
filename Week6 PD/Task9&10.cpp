#include <iostream>
#include <windows.h>
using namespace std;

void maze(int l, int w);
char getCharAtxy(short int x, short int y);
void printpacman(int x, int y);
void clear(int x, int y, char prev);
void erase(int x, int y);
void gotoxy(int x, int y);
void printghost1(int x, int y);
void printghost2(int x, int y);
void printscore(int score);

int main()
{

    int x = 3;
    int y = 2;
    bool gamerunning = true;
    int score = 0;
    string hdirection = "right";
    string vdirection = "up";
    char hprevchar = ' ';
    char vprevchar = ' ';
    int l ,w;
    
    cout << "Enter Length of maze: ";
    cin >> l;
    cout << "Enter Width of maze: ";
    cin >> w;

    while ((l < 25 && w < 50) || (l > 70 && w > 100))
    {
     cout << "Invalid! Please re-enter Length: ";
     cin >> l;
     cout << "Invalid! Please re-enter Width: ";
     cin >> w;        
    }

    int gx1 = 4;
    int gy1 = l - 1;
    int gx2 = 13;
    int gy2 = 10;

    system("cls");
    maze(l, w);
    printpacman(x, y);
    printghost1(gx1, gy1);
    printghost2(gx2, gy2);
    printscore(score);

    while (gamerunning)
    {
        Sleep(100);

        if (hdirection == "right")
        {
            char nextlocation = getCharAtxy(gx1 + 1, gy1);
            if (nextlocation == '|')
            {
                hdirection = "left";
            }
            else if (nextlocation == ' ' || nextlocation == '.')
            {
                clear(gx1, gy1, hprevchar);
                gx1 += 1;
                printghost1(gx1, gy1);
                hprevchar = nextlocation;
            }
            else if (nextlocation == 'P')
            {
                gamerunning = false;
            }
        }
        if (hdirection == "left")
        {
            char nextlocation = getCharAtxy(gx1 - 1, gy1);
            if (nextlocation == '|')
            {
                hdirection = "right";
            }
            else if (nextlocation == ' ' || nextlocation == '.')
            {
                clear(gx1, gy1, hprevchar);
                gx1 -= 1;
                printghost1(gx1, gy1);
                hprevchar = nextlocation;
            }
            else if (nextlocation == 'P')
            {
                gamerunning = false;
            }
        }

        if (vdirection == "up")
        {
            char nextlocation = getCharAtxy(gx2, gy2 - 1);
            if (nextlocation == '#')
            {
                vdirection = "down";
            }
            else if (nextlocation == ' ' || nextlocation == '.')
            {
                clear(gx2, gy2, vprevchar);
                gy2 -= 1;
                vprevchar = nextlocation;
                printghost2(gx2, gy2);
            }
            else if (nextlocation == 'P')
            {
                gamerunning = false;
            }
        }
        if (vdirection == "down")
        {
            char nextlocation = getCharAtxy(gx2, gy2 + 1);
            if (nextlocation == '#')
            {
                vdirection = "up";
            }
            else if (nextlocation == ' ' || nextlocation == '.')
            {
                clear(gx2, gy2, vprevchar);
                gy2 += 1;
                vprevchar = nextlocation;
                printghost2(gx2, gy2);
            }
            else if (nextlocation == 'P')
            {
                gamerunning = false;
            }
        }

        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextlocation = getCharAtxy(x - 1, y);
            if (nextlocation == ' ')
            {
                erase(x, y);
                x -= 1;
                printpacman(x, y);
            }
            else if (nextlocation == '.')
            {
                erase(x, y);
                x -= 1;
                score += 1;
                printpacman(x, y);
                printscore(score);
            }
            else if (nextlocation == 'G')
            {
                gamerunning = false;
            }
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextlocation = getCharAtxy(x + 1, y);
            if (nextlocation == ' ')
            {
                erase(x, y);
                x += 1;
                printpacman(x, y);
            }
            else if (nextlocation == '.')
            {
                erase(x, y);
                x += 1;
                score += 1;
                printpacman(x, y);
                printscore(score);
            }
            else if (nextlocation == 'G')
            {
                gamerunning = false;
            }
        }

        if (GetAsyncKeyState(VK_UP))
        {
            char nextlocation = getCharAtxy(x, y - 1);
            if (nextlocation == ' ')
            {
                erase(x, y);
                y -= 1;
                printpacman(x, y);
            }
            else if (nextlocation == '.')
            {
                erase(x, y);
                y -= 1;
                score += 1;
                printpacman(x, y);
                printscore(score);
            }
            else if (nextlocation == 'G')
            {
                gamerunning = false;
            }
        }

        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextlocation = getCharAtxy(x, y + 1);
            if (nextlocation == ' ')
            {
                erase(x, y);
                y += 1;
                printpacman(x, y);
            }
            else if (nextlocation == '.')
            {
                erase(x, y);
                y += 1;
                score += 1;
                printpacman(x, y);
                printscore(score);
            }
            else if (nextlocation == 'G')
            {
                gamerunning = false;
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gamerunning = false;
        }
    }

    return 0;
}

void maze(int L, int a)
{
    int w;
    int r;
    int l = L;
    int c = l/2;
    cout << endl;
    while (l != 0)
    {
        w = a;
        
        if (l == L || l == 1 )
        {
            while( w != 0)
            {
                cout << "#";
                w -= 1;
            }
            cout << endl;
        }

        else if (l == (L - 1) || l == 2)
        {
            cout << "||";
            w -= 2;
            while (w != 2)
            {
                cout << ".";
                w -= 1;
            }
            cout << "||" << endl;
            w = 0;
        }

        else if (l == 10 || l == 20 || l == L * 0.25 || l == L * 0.75 || l % 4 == 0)
        {
            cout << "||";
            w -= 2;
            if (w != 2)
            {
                r = w - (w/7);
                while (w > r)
                {
                    cout << " ";
                    w -= 1;
                }

                r = w - (w/10);
                while (w > r)
                {
                    cout << ".";
                    w -= 1;
                }

                cout << "     ";
                w -= 5;

                r = w - (w/8);
                while (w > r)
                {
                    cout << "|%|";
                    w -= 3;
                }

                cout << "   %%%";
                w -= 6;

                r = w - (w/3);
                while (w > r)
                {
                    cout << ".";
                    w -= 1;
                }

                cout << "%%%       %%%";
                w -= 13;

                while (w > 2)
                {
                    cout << ".";
                    w -= 1;
                }
            }
            cout << "||" << endl;
            w = 0;
        }

        else if (l % 5 == 2 || l % 3 == 0)
        {
            cout << "||";
            w -= 2;
            if (w != 2)
            {
                r = w - (w/7);
                while (w > r)
                {
                    cout << "%";
                    w -= 1;
                }

                r = w - (w/10);
                while (w > r)
                {
                    cout << " ";
                    w -= 1;
                }

                cout << "|%%%|";
                w -= 5;

                r = w - (w/8);
                while (w > r)
                {
                    cout << ".";
                    w -= 1;
                }

                cout << "|  %%%|";
                w -= 7;

                r = w - (w/3);
                while (w > r)
                {
                    cout << ".";
                    w -= 1;
                }

                while (w > 2)
                {
                    cout << " ";
                    w -= 1;
                }
            }
            cout << "||" << endl;
            w = 0;
        }

        else if (l == (c - 2) || l == (c + 2))
        {
            cout << "||";
            w -= 2;

            while (w != 2)
            {
                cout << ".";
                w -= 1;
            }

            cout << "||" << endl;
            w = 0;
        }

        else if (l == (c -1) || l == (c + 1))
        {
            int d = w / 2;
            cout << "||";
            w -= 2;

            if (w != 2)
            {
                while ( w != (d + 10))
                {
                    cout << " ";
                    w -= 1;
                }

                while (w != (d - 10))
                {
                    cout << "%";
                    w -= 1;
                }

                while (w != 2)
                {
                    cout << " ";
                    w -= 1;
                } 
            }
            cout << "||" << endl;
            w = 0;
        }

        else if (l == c)
        {
            int d = w / 2;
            cout << "||";
            w -= 2;

            if (w != 2)
            {
                while (w != d + 10)
                {
                    cout << " ";
                    w -= 1;
                }

                cout << "|%|";
                w -= 3;

                while (w != d - 7)
                {
                    cout << " ";
                    w -= 1;
                } 
                
                cout << "|%|";
                w -= 3;

                while (w != 2)
                {
                    cout << " ";
                    w -= 1;
                } 
            }

            cout << "||" << endl;
            w = 0;
        }

        

        else
        {
            cout << "||";
            w -= 2;
            if (w != 2)
            {
                r = w - (w/10);
                while (w > r)
                {
                    cout << ".";
                    w -= 1;
                }

                cout << "|%|";
                w -= 3;

                r = w - (w/10);
                while (w > r)
                {
                    cout << " ";
                    w -= 1;
                }

                r = w - (w/4);
                while (w > r)
                {
                    cout << "%";
                    w -= 1;
                }

                r = w - (w/3);
                while (w > r)
                {
                    cout << ".";
                    w -= 1;
                }

                r = w - (w/2);
                while (w > r)
                {
                    cout << " ";
                    w -= 1;
                }

                while (w > 8)
                {
                    cout << "|%|";
                    w -= 3;
                }

                while (w > 2)
                {
                    cout << ".";
                    w -= 1;
                }
            }
            cout << "||" << endl;
            w = 0;
        }
      
        l -= 1;
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void erase(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

void clear(int x, int y, char prev)
{
    gotoxy(x, y);
    cout << prev;
}

void printpacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}

void printghost1(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}

void printghost2(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}

void printscore(int score)
{
    gotoxy(30, 0);
    cout << "score: " << score;
}