#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	
	int *v,soldados;
	
	do{
		do{
			printf("Digite o número de soldados: ");
			scanf("%d",&soldados);
		}while(soldados<0||soldados>3501);
	
		if(soldados==0){
			break;
		}
		
		v = (int*) calloc (soldados,sizeof(int));

		int total=0,Nprimo=2,aux=0,aux2,resp;
		
		for(int cont=0;total<soldados;cont++){
			if(v[cont]==0){
				if(total==soldados-1){
					resp = cont+1;	
					break;
				}
				
				aux++;
				if(aux==Nprimo){
					v[cont]=1;
					total++;
					aux=0;
					for(int i=Nprimo+1; ;i++){
						aux2=0;
						for(int j=1;j<=i;j++){
							resp = i % j;
						
							if(resp==0){
								aux2++;
							}
						}
						if(aux2==2){
							Nprimo = i;
							break;
						}
					}
				}
			}
			if(cont==soldados-1){
				cont=-1;
			}
		}
		printf("\nO ultimo soldado estará na posição %d",resp);
		fflush(stdin);
		getchar();
	}while(soldados!=0);



	getchar();
	return 0;
}

