#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int v[10] = {5,4,9,4,2,1,8,2,18,0};
	int	cont, aux,menor,i;
	
	for(i=0;i<10; i++){
		menor = i;
		for(cont=i+1;cont<10;cont++){
			if(v[menor]>v[cont]){
				menor = cont;
				aux = v[i];
				v[i] = v[menor];
				v[menor] = aux;
			}
		}
	}
	
	for(cont=0;cont<10;cont++){
		printf("%d ",v[cont]);
	}
	



	getch();
	return 0;
}

