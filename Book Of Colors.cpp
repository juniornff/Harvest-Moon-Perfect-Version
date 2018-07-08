#include <iostream>
#include <windows.h>

void SetColor (unsigned short color){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}

using namespace std;

int main(){
	int x = 0;
	do{
		SetColor(x);
		cout<<x<<" ";
		x++;
	}while(x!=256);
	SetColor(15);
	system("pause");
}
