#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	ofstream archivo;
	int x, ItemID, Color;
	//remove("CeldasCampo.txt");
	archivo.open("CeldasCampo.txt",ios::out);
	for(int i = 0; i <= 24; i++){
    	for(int j = 0; j <= 42; j++){
    		x=1+rand()%(11-1);
    		switch(x){
    			case 1: ItemID = 79;
						Color = 104;
						break;
				case 2: ItemID = 207;
						Color = 100;
						break;
				case 3: ItemID = 42;
						Color = 98;
						break;
				case 4: ItemID = 47;
						Color = 100;
						break;
				case 5: ItemID = 127;
						Color = 104;
						break;
				case 6: ItemID = 32;
						Color = 102;
						break;
				case 7: ItemID = 32;
						Color = 102;
						break;
				case 8: ItemID = 32;
						Color = 102;
						break;
				case 9: ItemID = 32;
						Color = 102;
						break;
				case 10: ItemID = 32;
						Color = 102;
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
