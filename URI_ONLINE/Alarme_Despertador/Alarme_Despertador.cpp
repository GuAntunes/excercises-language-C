#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int h1,h2,m1,m2,total=0;
	
	do{
		printf("Digite a hora inicial: ");
		scanf("%d",&h1);
	}while(h1<0||h1>23);
		
	do{
		printf("Digite o minuto inicial: ");
		scanf("%d",&m1);
	}while(m1<0||m1>59);
	
	do{
		printf("Digite a hora do alarme: ");
		scanf("%d",&h2);
	}while(h2<0||h2>23);	
	
	do{
		printf("Digite o minuto do alarme: ");
		scanf("%d",&m2);
	}while(m2<0||m2>59);	
	
	system("cls");
	
	while(h1!=h2||m1!=m2){
		if(h1!=h2||m1>m2){
			total += 60;
			if(h1==23){
				h1=0;
			}else{
				h1++;
			}
		}
		if(h1==h2&&m1!=m2){
			total = total - (m1-m2);	
			break;			
		}
	}	
	
	
	printf("Minutos ate o alarme: %d",total);
	
	
	



	getchar();
	return 0;
}

