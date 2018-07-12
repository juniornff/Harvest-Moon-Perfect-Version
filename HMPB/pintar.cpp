#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void SetColor(unsigned short color);
void gotoxy(int x, int y);

void PaletaDeColores(){
	SetColor(25);printf("25");SetColor(15);printf("  ");SetColor(38);printf("38\n");
	SetColor(59);printf("59");SetColor(15);printf("  ");SetColor(76);printf("76\n");
	SetColor(93);printf("93");SetColor(15);printf("  ");SetColor(110);printf("110\n");
	SetColor(127);printf("127");SetColor(15);printf(" ");SetColor(128);printf("128\n");
	SetColor(145);printf("145");SetColor(15);printf(" ");SetColor(162);printf("162\n");
	SetColor(185);printf("185");SetColor(15);printf(" ");SetColor(196);printf("196\n");
	SetColor(213);printf("213");SetColor(15);printf(" ");SetColor(230);printf("230\n");
	SetColor(247);printf("247\n\n");SetColor(15);
}

void PintarCasa(int x, int y){
	gotoxy(x+1,y);SetColor(196);printf("%c%c%c%c%c",177,177,177,177,177);SetColor(230);printf("%c%c",178,178);
    gotoxy(x,y+1);SetColor(196);printf("%c%c%c%c%c%c%c",177,177,177,177,177,177,177);SetColor(230);printf("%c%c",178,178);
    gotoxy(x,y+2);SetColor(228);printf("%c",186);SetColor(230);printf("%c%c%c",178,178,178);SetColor(15);printf("%c",206);SetColor(230);printf("%c",178);SetColor(228);printf("%c",186);SetColor(230);printf("%c%c",178,178);
    gotoxy(x,y+3);SetColor(228);printf("%c",186);SetColor(230);printf("%c",178);SetColor(118);printf("[]");SetColor(230);printf("%c%c",178,178);SetColor(228);printf("%c",186);SetColor(230);printf("%c%c",178,178);
	gotoxy(x,y+4);SetColor(15);printf("Casa");
}

void PintarGraneroEstablo(int techo, int pared, int puerta){
	SetColor(15);printf(" ");SetColor(techo);printf("%c%c%c%c%c%c",177,177,177,177,177,177);SetColor(pared);printf("%c%c\n",178,178);
	SetColor(techo);printf("%c%c%c%c%c%c%c%c",177,177,177,177,177,177,177,177);SetColor(pared);printf("%c%c\n",178,178);
    SetColor(pared);printf("%c",186);SetColor(pared);printf("%c%c%c%c%c%c",178,178,178,178,178,178);SetColor(pared);printf("%c",186);SetColor(pared);printf("%c%c\n",178,178);
    SetColor(pared);printf("%c",186);SetColor(pared);printf("%c%c",178,178);SetColor(puerta);printf("[]");SetColor(pared);printf("%c%c",178,178);SetColor(pared);printf("%c",186);SetColor(pared);printf("%c%c\n",178,178);
    SetColor(15);printf("Gallinero/Establo\n\n");
}

void PintarCampoCultivo(int px, int py){
	int X, Y, Color, ItemID;
	int opx = px, opy = py;
    ifstream CeldasCampo;
    CeldasCampo.open("CeldasCampo.txt",ios::in);
    for(int i = 0; i <= 24; i++){
    	for(int j = 0; j <= 42; j++){
    		CeldasCampo>>X>>Y>>ItemID>>Color;
    		if(j == X && i == Y){
    			if(j == 42){
    				gotoxy(px,py);SetColor(Color);printf("%c",ItemID);
				}else{
					gotoxy(px,py);SetColor(Color);printf("%c",ItemID);
				}
			}else{
				if(j == 42){
    				gotoxy(px,py);SetColor(98);printf("%c",32);
				}else{
					gotoxy(px,py);SetColor(98);printf("%c",32);
				}
			}
			px++;
		}
		px = opx;
		py++;
	}
	CeldasCampo.close();
}
