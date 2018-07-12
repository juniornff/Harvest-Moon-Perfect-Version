#include <stdio.h>

void gotoxy(int x, int y);

void contorno(){
	for(int i = 0; i <= 48; i++){ //Y
    	for(int j = 0; j <= 168; j++){ //X
    		if(i == 0){ //Primera linea
    			if(j == 0){
    				printf("%c",201);
				}
				if(j > 0 && j <168 ){
					if(j == 112){
						printf("%c",203);
					}else{
						printf("%c",205);
					}
				}
				if(j == 168){
					printf("%c",187);
				}
			}
			if(i > 0 && i < 22){ //primer segmento
				gotoxy(0,i);printf("%c",186);gotoxy(112,i);printf("%c",186);gotoxy(168,i);printf("%c",186);
			}
			if(i == 22){ //Parte del medio
				if(j == 0){
					gotoxy(0,i);printf("%c",186);gotoxy(112,i);printf("%c",204);
				}
				if(j > 112 && j < 168){
					printf("%c",205);
				}
				if(j == 168){
					gotoxy(168,i);printf("%c",185);
				}
			}
			if(i > 22 && i < 48){ //Segundo segmento segmento
				gotoxy(0,i);printf("%c",186);gotoxy(112,i);printf("%c",186);gotoxy(168,i);printf("%c",186);
			}
			if(i == 48){ //Ultima linea
   				if(j == 0){
					gotoxy(j,i);printf("%c",200);
				}
				if(j > 0 && j <168 ){
					if(j == 112){
						gotoxy(j,i);printf("%c",202);
					}else{
						gotoxy(j,i);printf("%c",205);
					}
				}
				if(j == 168){
   					gotoxy(j,i);printf("%c",188);
   					gotoxy(0,0);printf("%c",201);
				}
			}
		}
	}
}
