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

void SetColor(unsigned short color){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}

int main() {
	OcultarCursor();
	int x = 10,y = 10;
	
	gotoxy(x+1,y); SetColor(13);printf("%c",1);
	gotoxy(x,y+1); SetColor(13);printf("/%c%c",221,92);
	gotoxy(x+1,y+2); SetColor(13);printf("%c",221);
	gotoxy(x,y+3); SetColor(13);printf("/%c%c",39,92);
	bool game_over = false;

	while(!game_over){
		if(kbhit()){
			char tecla = getch();
			gotoxy(x+1,y); SetColor(15);printf(" ",1);
			gotoxy(x,y+1); SetColor(15);printf("   ",221,92);
			gotoxy(x+1,y+2); SetColor(15);printf(" ",221);
			gotoxy(x,y+3); SetColor(15);printf("   ",39,92);
			if(tecla == IZQUIERDA){
				if(x == 0){}else{x--;}
			}//izquierda
			if(tecla == DERECHA){
				if(x == 97){}else{x++;}
			}//derecha
			if(tecla == ARRIBA){
				if(y == 0){}else{y--;}
			}//arriba
			if(tecla == ABAJO){
				if(y == 39){}else{y++;}
			}//abajo
			gotoxy(x+1,y); SetColor(13);printf("%c",1);
			gotoxy(x,y+1); SetColor(13);printf("/%c%c",221,92);
			gotoxy(x+1,y+2); SetColor(13);printf("%c",221);
			gotoxy(x,y+3); SetColor(13);printf("/%c%c",39,92);
		}
		
		Sleep(30);
	}
	return 0;
}
