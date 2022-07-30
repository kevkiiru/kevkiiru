#include <stdio.h>
#include "main.h"
#include <stdlib.h>


struct Date
{
	int dd;
	int mm;
	int yy;
};
struct Date date;

struct Remainder
{
	int dd;
	int mm;
	char note[50];
};
struct Remainder R;


COORD xy = {0, 0};


void gotoxy(int x, int y)
{
	xy.X = x;//X and Y coordinates
	xy.Y = y;
	SetConsoleCursorPosition(GetStdGHandle(STD_OUTPUT_HANDLE), xy);
}

void SetColor(int ForgC)//will set the forground color for printing
{
	WORD wCOLOR;

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
	{
		wColor = (csbi.wAttributes & 0XF0) + (ForgC & 0XF0);
		SetConsoleTextAttribute(hStdOut, wColor);
	}

	return;
}





int main()
{

}
