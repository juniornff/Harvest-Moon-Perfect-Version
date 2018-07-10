#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void SetColor (unsigned short color){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}

void PintarCasa(){
	SetColor(15);printf(" ");SetColor(196);printf("%c%c%c%c%c",177,177,177,177,177);SetColor(230);printf("%c%c\n",178,178);
    SetColor(196);printf("%c%c%c%c%c%c%c",177,177,177,177,177,177,177);SetColor(230);printf("%c%c\n",178,178);
    SetColor(228);printf("%c",186);SetColor(230);printf("%c%c%c",178,178,178);SetColor(15);printf("%c",206);SetColor(230);printf("%c",178);SetColor(228);printf("%c",186);SetColor(230);printf("%c%c\n",178,178);
    SetColor(228);printf("%c",186);SetColor(230);printf("%c",178);SetColor(118);printf("[]");SetColor(230);printf("%c%c",178,178);SetColor(228);printf("%c",186);SetColor(230);printf("%c%c\n",178,178);
	SetColor(15);printf("Casa\n\n");
}

void PintarGraneroEstablo(){
	SetColor(15);printf(" ");SetColor(196);printf("%c%c%c%c%c%c",177,177,177,177,177,177);SetColor(230);printf("%c%c\n",178,178);
	SetColor(196);printf("%c%c%c%c%c%c%c%c",177,177,177,177,177,177,177,177);SetColor(230);printf("%c%c\n",178,178);
    SetColor(228);printf("%c",186);SetColor(230);printf("%c%c%c%c%c%c",178,178,178,178,178,178);SetColor(228);printf("%c",186);SetColor(230);printf("%c%c\n",178,178);
    SetColor(228);printf("%c",186);SetColor(230);printf("%c%c",178,178);SetColor(118);printf("[]");SetColor(230);printf("%c%c",178,178);SetColor(228);printf("%c",186);SetColor(230);printf("%c%c\n",178,178);
    SetColor(15);printf("Gallinero/Establo\n\n");
}

void PintarCampoCultivo(){
	int X, Y, Color, ItemID;
    ifstream CeldasCampo;
    CeldasCampo.open("CeldasCampo.txt",ios::in);
    for(int i = 0; i <= 24; i++){
    	for(int j = 0; j <= 42; j++){
    		CeldasCampo>>X>>Y>>ItemID>>Color;
    		if(j == X && i == Y){
    			if(j == 42){
    				SetColor(Color);printf("%c\n",ItemID);
				}else{
					SetColor(Color);printf("%c",ItemID);
				}
			}else{
				if(j == 42){
    				SetColor(98);printf("%c\n",32);
				}else{
					SetColor(98);printf("%c",32);
				}
			}
		}
	}
	CeldasCampo.close();
}

int main()
{
	PintarCasa();
	PintarGraneroEstablo();
	SetColor(196);printf("%c%c%c%c%c%c%c%c%c%c\n",177,177,177,177,177,177,177,177,177,177);
    SetColor(230);printf("%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178);
    SetColor(230);printf("%c%c%c",178,178,178);SetColor(118);printf("[|]");SetColor(230);printf("%c%c%c%c\n",178,178,178,178);
    SetColor(15);printf("Casa grande/Super/Clinica\n\n");
    PintarCampoCultivo();
    SetColor(15);
	system("pause");   
}
