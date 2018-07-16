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

//inclucion de las funciones de otros archivos cpp
void gotoxy(int x, int y);
void SetColor(unsigned short color);
void contorno();
void PaletaDeColores();
void PintarCasa(int x, int y);
void PintarGraneroEstablo(int techo, int pared, int puerta);
void GeneralCeldasCampo();
void PintarCampoCultivo(int px, int py);
//-----------------------------------------------------

void OcultarCursor(){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon,&cci);
}

int main() {
	OcultarCursor();
	int x = 1,y = 1;
	contorno();
	PintarCasa(3,5);
	GeneralCeldasCampo();
	PintarCampoCultivo(31,10);
	gotoxy(x,y);SetColor(9);  printf("%c",1);
	
	bool game_over = false;

	while(!game_over){
		
		if(kbhit()){
			char tecla = getch();
			gotoxy(x,y);SetColor(15);  printf(" ");
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
				if(y == 47){}else{y++;}
			}//abajo
			gotoxy(x,y);SetColor(9);  printf("%c",1);SetColor(15);
		}
		Sleep(50);
	}
	return 0;
}
