#include <stdio.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("*");
		
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = 4;
	dwPos.Y = 5;
	SetConsoleCursorPosition(hCon, dwPos);
	
	printf("*");
	
	return 0;
}
