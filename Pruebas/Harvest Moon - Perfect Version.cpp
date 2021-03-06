#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define ESCAPE 27
#define ENTER 13
#define TAB 9
#define ESPACIO 32

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

void SetColor(unsigned short color){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}

int main() {
	OcultarCursor();
	int x = 10,y = 10;
	
	gotoxy(x,y);SetColor(9);  printf("%c",1);
	gotoxy(x,y+1);SetColor(9);printf("%c",24);
	gotoxy(x,y+2);SetColor(9);printf("%c",94);
	
	bool game_over = false;

	while(!game_over){
		if(kbhit()){
			char tecla = getch();
			gotoxy(x,y);SetColor(15);  printf(" ");
			gotoxy(x,y+1);SetColor(15);printf(" ");
			gotoxy(x,y+2);SetColor(15);printf(" ");
			if(tecla == IZQUIERDA){
				if(x == 1){}else{x--;}
			}//izquierda
			if(tecla == DERECHA){
				if(x == 111){}else{x++;}
			}//derecha
			if(tecla == ARRIBA){
				if(y == 1){}else{y--;}
			}//arriba
			if(tecla == ABAJO){
				if(y == 45){}else{y++;}
			}//abajo
			gotoxy(x,y);SetColor(9);  printf("%c",1);
			gotoxy(x,y+1);SetColor(9);printf("%c",24);
			gotoxy(x,y+2);SetColor(9);printf("%c",94);
		}
		
		Sleep(30);
	}
	return 0;
}
