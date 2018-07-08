#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void gotoxy(int x, int y){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);
}

void OcultarCursor(){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon,&cci);
}

int main() {
	OcultarCursor();
	int x = 10,y = 10;
	gotoxy(x,y); printf("*");
	bool game_over = false;

	while(!game_over){
		
		if(kbhit()){
			char tecla = getch();
			gotoxy(x,y); printf(" ");
			if(tecla == IZQUIERDA){x--;}//izquierda
			if(tecla == DERECHA){x++;}//derecha
			if(tecla == ARRIBA){y--;}//arriba
			if(tecla == ABAJO){y++;}//abajo
			gotoxy(x,y); printf("*");
		}
		
		Sleep(30);
	}
	return 0;
}
