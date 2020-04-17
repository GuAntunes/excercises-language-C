#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x, y, z;
	
	FILE *file;
	file = fopen("arquivo.txt","r");

	fscanf(file,"%d %d %d",x,y,z);
	
	printf("%d - %d - %d",x,y,z);
	
	
	
	
	
	fclose(file);	
	system("pause");
	return 0;
}

