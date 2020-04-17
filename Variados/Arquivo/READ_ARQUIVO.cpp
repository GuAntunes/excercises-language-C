#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");

	FILE *arq;
	
	int x, y , z;
	
	arq = fopen("arquivo.txt","r");
	fscanf(arq,"%d %d %d",&x,&y,&z);
	
	if(arq==NULL){
		printf("O programa não pode ser aberto!!");
		system("pause");
		return 0;
	}
	printf("%d - %d - %d\n\n",x,y,z);
	 
	fclose(arq);
	system("pause");
	return 0;
}

