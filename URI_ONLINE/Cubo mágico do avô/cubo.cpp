#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int matriz[6][9],aux,comand,save[3],cont;
	
	
	for(int i=0;i<6;i++){
		int aux=0;
		printf("Lado %d: \n",i+1);
		for(int j=0;j<9;j++){
			if(aux==3){
				printf("\n");
				aux=0;
			}
			printf("%d: ",j+1);
			scanf("%d",&matriz[i][j]);
			aux++;
		}
	}
	
	do{
		do{
			printf("Digite o comando: ");
			scanf("%d",&comand);
		}while(comand<0||comand>6);
		
		if(comand!=0){
			switch(comand){
				case 1:
					aux=0;
					cont=6;
					for(int i=2;i<9;i+=3){
						save[aux] = matriz[3][i];
						aux++;
						matriz[3][i] = matriz[5][cont];
						cont-=3;
					}					
			}
		}
		
	}while(comand!=0);
	
	for(int i=0;i<6;i++){
		for(int j=0;j<9;j++){
			printf("")
		}
	}
	



	getchar();
	return 0;
}

