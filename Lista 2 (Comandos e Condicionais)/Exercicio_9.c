#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int l1,l2,l3;
		
	printf("Digite o primeiro lado do tri�ngulo: ");
	scanf("%d",&l1);
	
	printf("Digite o segundo lado do tri�ngulo: ");
	scanf("%d",&l2);
	
	printf("Digite o terceiro lado do tri�ngulo: ");
	scanf("%d",&l3);
	
	if(l1>l2+l3||l2>l1+l3||l3>l2+l1){
		printf("As medidas n�o formam um tri�ngulo");
	}else{
		if(l1==l2&&l2==l3){
			printf("\nAs medidas formam um tri�ngulo equilatero");
		}else if(l1==l2&&l2!=l3||l1==l3&&l3!=l2||l2==l3&&l3!=l1){
			printf("\nAs medidas formam um tri�ngulo is�sceles");
		}else if(l1!=l2&&l2!=l3&&l3!=l1){
			printf("\nAs medidas formam um tri�ngulo escaleno");
		}
		
		
		
		
	}
	

	getch();
	return 0;
}

