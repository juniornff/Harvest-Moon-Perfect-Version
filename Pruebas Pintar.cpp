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
    SetColor(14);printf("%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178);
    SetColor(14);printf("%c",178);SetColor(118);printf("[|]");SetColor(14);printf("%c%c%c%c%c%c\n",178,178,178,178,178,178);
    SetColor(15);printf("Granero\n\n");
    
	SetColor(4);printf("%c%c%c%c%c%c\n",177,177,177,177,177,177);
    SetColor(14);printf("%c%c%c%c%c%c\n",178,178,178,178,178,178);
    SetColor(14);printf("%c%c",178,178);SetColor(118);printf("[]");SetColor(14);printf("%c%c\n",178,178);
    SetColor(15);printf("Gallinero/Casa/Establo\n\n");
    
	SetColor(4);printf("%c%c%c%c%c%c%c%c%c%c\n",177,177,177,177,177,177,177,177,177,177);
    SetColor(14);printf("%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178);
    SetColor(14);printf("%c%c%c",178,178,178);SetColor(118);printf("[|]");SetColor(14);printf("%c%c%c%c\n",178,178,178,178);
    SetColor(15);printf("Casa grande/Super/Clinica\n\n");
    
    SetColor(15);
	system("pause");   
}
