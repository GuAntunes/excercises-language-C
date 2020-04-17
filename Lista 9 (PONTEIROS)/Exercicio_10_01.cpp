#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero[5], *num;

	for(int cont=0;cont<5;cont++){
		num = &numero[cont];
		printf("[%d]Digite um valor: ",cont);
		scanf("%d",num);
	}
	
	for(int cont=0; cont<5;cont++){
		printf("%d\n",numero[cont]);
	}

	for(int cont=0; cont<5;cont++){
		num = &numero[cont];
		printf("%d\n",*num);
	}
	
	getchar();
	return 0;
}

