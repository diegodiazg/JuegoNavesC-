#include <stdio.h>
#include <unistd.h>

#include <string.h>
#include <termios.h>
#include <unistd.h>

#define ARRIBA 72
#define ABAJO  80
#define IZQUIERDA 75
#define DERECHA 77

void SetCursorPos(int XPos, int YPos){
	printf("\033[%d;%dH", YPos+1, XPos+1);
}

int main ()
{
	int x=10;
	int y=10;

	SetCursorPos(x,y);
	printf ("*");
	if(kbhit()){
		char tecla = getch();
		if(tecla == IZQUIERDA)x--;
		if(tecla == DERECHA)x++;
		if(tecla == ARRIBA)y--;
		if(tecla == ABAJO)y++;
		SetCursorPos(x,y);
		printf ("*");
	}

	
	return 0;
}

