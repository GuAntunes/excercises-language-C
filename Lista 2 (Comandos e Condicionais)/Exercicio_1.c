#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int n1,n2;
	
	printf("Digite o valor de n1: ");
	scanf("%d",&n1);	
	
	printf("Digite o valor de n2: ");
	scanf("%d",&n2);

	if(n1>n2){
		printf("\n\nN1 é maior que N2");
	}else if(n1<n2){
		printf("\n\nN1 é menor que N2");
	}else{
		printf("\n\nN1 é igual a N2");
	}
	getch();
	return 0;
}

