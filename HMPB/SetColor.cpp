#include <windows.h>

void SetColor(unsigned short color){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}
