#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void SetColor (unsigned short color){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}
int main()
{
    SetColor(4);printf("%c%c%c%c%c%c%c%c%c%c\n",177,177,177,177,177,177,177,177,177,177);
    SetColor(6);printf("%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178);
    SetColor(6);printf("%c",178);SetColor(118);printf("[|]");SetColor(6);printf("%c%c%c%c%c%c\n\n",178,178,178,178,178,178);
    
    SetColor(4);printf("%c%c%c%c\n",177,177,177,177);
    SetColor(6);printf("%c%c%c%c\n",178,178,178,178);
    SetColor(6);printf("%c",178);SetColor(118);printf("[]");SetColor(6);printf("%c\n",178);
    SetColor(15);
    system("pause");   
}
