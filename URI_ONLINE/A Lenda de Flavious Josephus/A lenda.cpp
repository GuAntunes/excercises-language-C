#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int *v,num,salto,aux,total,resp,n;	
	
	do{
		printf("Digite o número de casos de teste: ");
		scanf("%d",&n);
	}while(n<1||n>30);
	
	for(int i=0;i<n;i++){
		system("cls");
		do{
			printf("Digite o número de soldados: ");
			scanf("%d",&num);
		}while(num<1||num>10000);
		
		do{
			printf("Digite o número do salto: ");
			scanf("%d",&salto);
		}while(salto<1||salto>1000);	
	
		v = (int*) calloc(num,sizeof(int));
	
		aux=0;
		total=0;
		
		for(int cont=0;total<num;cont++){
			if(v[cont]==0){
				if(total==num-1){
					resp = cont+1;	
					break;
				}
				
				aux++;
				if(aux==salto){
					v[cont]=1;
					total++;
					aux=0;
				}
			}
			if(cont==num-1){
				cont=-1;
			}
		}
		
		printf("O ultimo soldado estara na posição %d",resp);
		fflush(stdin);
		getchar();
	}
	
	free(v);
	getchar();
	return 0;
}

