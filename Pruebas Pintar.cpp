#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void SetColor (unsigned short color){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}
int main()
{
	SetColor(15);printf(" ");SetColor(196);printf("%c%c%c%c%c",177,177,177,177,177);SetColor(230);printf("%c%c\n",178,178);
    SetColor(196);printf("%c%c%c%c%c%c%c",177,177,177,177,177,177,177);SetColor(230);printf("%c%c\n",178,178);
    SetColor(228);printf("%c",186);SetColor(230);printf("%c%c%c",178,178,178);SetColor(15);printf("%c",206);SetColor(230);printf("%c",178);SetColor(228);printf("%c",186);SetColor(230);printf("%c%c\n",178,178);
    SetColor(228);printf("%c",186);SetColor(230);printf("%c",178);SetColor(118);printf("[]");SetColor(230);printf("%c%c",178,178);SetColor(228);printf("%c",186);SetColor(230);printf("%c%c\n",178,178);
	SetColor(15);printf("Casa\n\n");
    
    SetColor(15);printf(" ");SetColor(196);printf("%c%c%c%c%c%c",177,177,177,177,177,177);SetColor(230);printf("%c%c\n",178,178);
	SetColor(196);printf("%c%c%c%c%c%c%c%c",177,177,177,177,177,177,177,177);SetColor(230);printf("%c%c\n",178,178);
    SetColor(228);printf("%c",186);SetColor(230);printf("%c%c%c%c%c%c",178,178,178,178,178,178);SetColor(228);printf("%c",186);SetColor(230);printf("%c%c\n",178,178);
    SetColor(228);printf("%c",186);SetColor(230);printf("%c%c",178,178);SetColor(118);printf("[]");SetColor(230);printf("%c%c",178,178);SetColor(228);printf("%c",186);SetColor(230);printf("%c%c\n",178,178);
    SetColor(15);printf("Gallinero/Establo\n\n");
    
	SetColor(196);printf("%c%c%c%c%c%c%c%c%c%c\n",177,177,177,177,177,177,177,177,177,177);
    SetColor(230);printf("%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178);
    SetColor(230);printf("%c%c%c",178,178,178);SetColor(118);printf("[|]");SetColor(230);printf("%c%c%c%c\n",178,178,178,178);
    SetColor(15);printf("Casa grande/Super/Clinica\n\n");
    
    int x = 5, y = 5, c = 108, t = 64; //rosa
    
    for(int i = 0; i <= 25; i++){
    	for(int j = 0; j <= 43; j++){
    		if(j == x && i == y){
    			SetColor(c);printf("%c",t);
			}else{
				if(j == 43){
    				SetColor(98);printf("%c\n",32);
				}else{
					SetColor(98);printf("%c",32);
				}
			}
		}
	}
    
    SetColor(15);
	system("pause");   
}
