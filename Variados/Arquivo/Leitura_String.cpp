#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	FILE *file;	
	
	file = fopen("leitura_string.txt","r");
	
	if(file==NULL){
		printf("N�o foi poss�vel abrir o arquivo!!");
		getchar();
		return 0;
	}
	
	char string[100];
	
	while(fgets(string,100,file)!= NULL){
		printf("%s",string);
	}
	fclose(file);
	
	



	getchar();
	return 0;
}

