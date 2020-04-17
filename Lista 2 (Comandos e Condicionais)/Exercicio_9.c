#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int l1,l2,l3;
		
	printf("Digite o primeiro lado do triângulo: ");
	scanf("%d",&l1);
	
	printf("Digite o segundo lado do triângulo: ");
	scanf("%d",&l2);
	
	printf("Digite o terceiro lado do triângulo: ");
	scanf("%d",&l3);
	
	if(l1>l2+l3||l2>l1+l3||l3>l2+l1){
		printf("As medidas não formam um triângulo");
	}else{
		if(l1==l2&&l2==l3){
			printf("\nAs medidas formam um triângulo equilatero");
		}else if(l1==l2&&l2!=l3||l1==l3&&l3!=l2||l2==l3&&l3!=l1){
			printf("\nAs medidas formam um triângulo isósceles");
		}else if(l1!=l2&&l2!=l3&&l3!=l1){
			printf("\nAs medidas formam um triângulo escaleno");
		}
		
		
		
		
	}
	

	getch();
	return 0;
}

