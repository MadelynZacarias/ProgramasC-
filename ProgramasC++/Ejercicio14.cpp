//Mover un punto en toda la pantalla//
#include <iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

void gotoxy(int x1, int y1){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x1;
	dwPos.Y = y1;
	SetConsoleCursorPosition(hcon, dwPos);
}
char opcion;
int x=10, y=10;

int main()
{
	while(opcion!='z')
	{
		system("cls");
		gotoxy(x,y); cout<<"*";
		opcion=getch();
		switch(opcion)
		{
			case 'i': y--; break;
			case 'k': y++; break;
			case 'j': x--; break;
			case 'l': x++; break;
		}
	}
	return 0;
}
