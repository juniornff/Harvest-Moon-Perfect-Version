#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>

using namespace std;

bool is_file(string file)
{
 FILE * archivo;
 if (archivo = fopen(file.c_str(), "r"))
 {
  fclose(archivo);
  return true;           
 }    
 else
 {
  return false;  
 }
}

void GeneralCeldasCampo(){
	ofstream archivo;
	ifstream CeldasCampo;
	int origenx[42][24], origeny[42][24], origeni[42][24], origenc[42][24], x, ItemID, Color;
	bool origen;
	srand (time(NULL));
	
	if(is_file("CeldasCampo.txt")){
		CeldasCampo.open("CeldasCampo.txt",ios::in);
		for(int oi = 0; oi <= 24; oi++){
    		for(int oj = 0; oj <= 42; oj++){
				CeldasCampo>>origenx[oj][oi]>>origeny[oj][oi]>>origeni[oj][oi]>>origenc[oj][oi];
			}
		}
		CeldasCampo.close();
		remove("CeldasCampo.txt");
		origen = true;
	}
	
	archivo.open("CeldasCampo.txt",ios::out);
	for(int i = 0; i <= 24; i++){
    	for(int j = 0; j <= 42; j++){
    		cambio:
			x=rand() % 10 + 1;
    		switch(x){
    			case 1: ItemID = 79;
						Color = 104;
						if(origen){
							if(j == origenx[j][i] && i == origeny[j][i] && ItemID == origeni[j][i]){
								goto cambio;
							}
						}
						break;
				case 2: ItemID = 207;
						Color = 100;
						if(origen){
							if(j == origenx[j][i] && i == origeny[j][i] && ItemID == origeni[j][i]){
								goto cambio;
							}
						}
						break;
				case 3: ItemID = 42;
						Color = 98;
						if(origen){
							if(j == origenx[j][i] && i == origeny[j][i] && ItemID == origeni[j][i]){
								goto cambio;
							}
						}
						break;
				case 4: ItemID = 47;
						Color = 100;
						if(origen){
							if(j == origenx[j][i] && i == origeny[j][i] && ItemID == origeni[j][i]){
								goto cambio;
							}
						}
						break;
				case 5: ItemID = 127;
						Color = 104;
						if(origen){
							if(j == origenx[j][i] && i == origeny[j][i] && ItemID == origeni[j][i]){
								goto cambio;
							}
						}
						break;
				case 6: ItemID = 32;
						Color = 102;
						if(origen){
							if(j == origenx[j][i] && i == origeny[j][i] && ItemID == origeni[j][i]){
								goto cambio;
							}
						}
						break;
				case 7: ItemID = 32;
						Color = 102;
						if(origen){
							if(j == origenx[j][i] && i == origeny[j][i] && ItemID == origeni[j][i]){
								goto cambio;
							}
						}
						break;
				case 8: ItemID = 32;
						Color = 102;
						if(origen){
							if(j == origenx[j][i] && i == origeny[j][i] && ItemID == origeni[j][i]){
								goto cambio;
							}
						}
						break;
				case 9: ItemID = 32;
						Color = 102;
						if(origen){
							if(j == origenx[j][i] && i == origeny[j][i] && ItemID == origeni[j][i]){
								goto cambio;
							}
						}
						break;
				case 10: ItemID = 32;
						Color = 102;
						if(origen){
							if(j == origenx[j][i] && i == origeny[j][i] && ItemID == origeni[j][i]){
								goto cambio;
							}
						}
						break;
			}
    		if(j == 42 && i == 24){
    			archivo<<j<<"	"<<i<<"	"<<ItemID<<"	"<<Color;
			}else{
				archivo<<j<<"	"<<i<<"	"<<ItemID<<"	"<<Color<<endl;
			}
		}
	}
	archivo.close();
}
