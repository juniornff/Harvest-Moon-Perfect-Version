#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	ofstream archivo;
	ifstream CeldasCampo;
	int origenx[42][24], origeny[42][24], origeni[42][24], origenc[42][24], x, x2, ItemID, Color;
	//remove("CeldasCampo.txt");
	
	CeldasCampo.open("CeldasCampo.txt",ios::in);
	for(int oi = 0; oi <= 24; oi++){
    	for(int oj = 0; oj <= 42; oj++){
			CeldasCampo>>origenx[oj][oi]>>origeny[oj][oi]>>origeni[oj][oi]>>origenc[oj][oi];
		}
	}
	CeldasCampo.close();
	
	archivo.open("CeldasCampo.txt",ios::out);
	for(int i = 0; i <= 24; i++){
    	for(int j = 0; j <= 42; j++){
    		cambio:
			x=1+rand()%(11-1);
    		switch(x){
    			case 1: ItemID = 79;
						Color = 104;
						if(ItemID == origeni[j][i]){
							x2 = 1+rand()%(10-1);
							x = x + x2;
							goto cambio;
						}
						break;
				case 2: ItemID = 207;
						Color = 100;
						if(ItemID == origeni[j][i]){
							x2 = 1+rand()%(9-1);
							x = x + x2;
							goto cambio;
						}
						break;
				case 3: ItemID = 42;
						Color = 98;
						if(ItemID == origeni[j][i]){
							x2 = 1+rand()%(8-1);
							x = x + x2;
							goto cambio;
						}
						break;
				case 4: ItemID = 47;
						Color = 100;
						if(ItemID == origeni[j][i]){
							x2 = 1+rand()%(7-1);
							x = x + x2;
							goto cambio;
						}
						break;
				case 5: ItemID = 127;
						Color = 104;
						if(ItemID == origeni[j][i]){
							x2 = 1+rand()%(6-1);
							x = x + x2;
							goto cambio;
						}
						break;
				case 6: ItemID = 32;
						Color = 102;
						if(ItemID == origeni[j][i]){
							x2 = 1+rand()%(5-1);
							x = x + x2;
							goto cambio;
						}
						break;
				case 7: ItemID = 32;
						Color = 102;
						if(ItemID == origeni[j][i]){
							x2 = 1+rand()%(4-1);
							x = x + x2;
							goto cambio;
						}
						break;
				case 8: ItemID = 32;
						Color = 102;
						if(ItemID == origeni[j][i]){
							x2 = 1+rand()%(3-1);
							x = x + x2;
							goto cambio;
						}
						break;
				case 9: ItemID = 32;
						Color = 102;
						if(ItemID == origeni[j][i]){
							x2 = 1+rand()%(2-1);
							x = x + x2;
							goto cambio;
						}
						break;
				case 10: ItemID = 32;
						Color = 102;
						if(ItemID == origeni[j][i]){
							x2 = 1+rand()%(10-1);
							x = x - x2;
							goto cambio;
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
	system("pause");
}
